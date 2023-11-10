
import java.awt.FlowLayout;
import java.awt.GridLayout;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.util.Arrays;

import javax.swing.*;

public class Calc {
    private JTextField txtNum1;
    private JTextField txtNum2;
    private JComboBox<Object> op;
    public Calc() {
        prepareGUI();
    }
    public static void main(String[] args) {
        Calc main = new Calc();
    }

    private void prepareGUI() {
//        JFrame
        JFrame mainFrame = new JFrame();
        mainFrame.setBounds(100, 100, 800, 400);
        mainFrame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        mainFrame.setLayout(new FlowLayout());
            /*
            input
            combobox
            input
            button
             */

//        JPanel
        JPanel panel = new JPanel(new FlowLayout());

//        JButton
        JButton btnCalc = new JButton("Calcule");
        btnCalc.setActionCommand("Calc");

//        JText Num1 and Num2
        txtNum1 = new JTextField(30);
        txtNum2 = new JTextField(30);

//        JComboBox
        op = new JComboBox<>();
        for (String s : Arrays.asList("+", "-", "*", "/")) {
            op.addItem(s);
        }


        btnCalc.addActionListener(new BtnHandler());
        panel.add(txtNum1);
        panel.add(op);
        panel.add(txtNum2);

        mainFrame.add(panel); //Add panel to JFrame
        mainFrame.add(btnCalc);
        mainFrame.setVisible(true);
    }

    private class BtnHandler implements ActionListener {

        @Override
        public void actionPerformed(ActionEvent e) {
            String command = e.getActionCommand();
            switch (command) {
                case "Calc":
                    if (txtNum1.getText() != null && txtNum2.getText() != null && op.getSelectedItem() != null) {
                        Integer num1 = Integer.parseInt(txtNum1.getText());
                        Integer num2 = Integer.parseInt(txtNum2.getText());

                        String opSelected = (String) op.getSelectedItem();

                        switch (opSelected) {
                            case "+":
                                JOptionPane.showMessageDialog(null, num1 + num2);
                                break;
                            case "-":
                                JOptionPane.showMessageDialog(null, num1 - num2);
                                break;
                            case "*":
                                JOptionPane.showMessageDialog(null, num1 * num2);
                                break;
                            case "/":
                                JOptionPane.showMessageDialog(null, num1 / num2);
                                break;
                            default:
                                System.out.println("Invalid Action");
                        }
                    }
                    break;
                default:
            }
        }

    }
}