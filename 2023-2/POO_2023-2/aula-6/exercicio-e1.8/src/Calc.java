
import java.awt.FlowLayout;
import java.awt.GridLayout;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.util.Arrays;

import javax.swing.*;

public class Calc {
    private JTextField txtNum1;
    public Calc() {
        prepareGUI();
    }
    public static void main(String[] args) {
        Calc main = new Calc();
    }

    private void prepareGUI() {
//        JFrame
        JFrame mainFrame = new JFrame();
        mainFrame.setBounds(100, 100, 400, 400);
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
        btnCalc.setActionCommand("Action");

//        JText Num1 and Num2
        txtNum1 = new JTextField(30);
        JTextField txtNum2 = new JTextField(30);

//        JComboBox
        JComboBox<Object> op = new JComboBox<>();
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

            if (command.equals("Action")) {
                System.out.println("My first event");
                JOptionPane.showMessageDialog(null, txtNum1.getText());
            } else {
                System.out.println("Invalid Action");
            }
        }

    }
}