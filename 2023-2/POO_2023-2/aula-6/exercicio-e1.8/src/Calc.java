
import java.awt.FlowLayout;
import java.awt.GridLayout;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

import javax.swing.*;

import static java.awt.SystemColor.text;

public class Calc {
    public Calc() {
        prepareGUI();
    }
    private JTextField txtNum1;

    public static void main(String[] args) {
        Calc main = new Calc();
    }

    private void prepareGUI() {
        JFrame mainFrame = new JFrame();
        mainFrame.setBounds(100, 100, 400, 400);
        mainFrame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        mainFrame.setLayout(new GridLayout(4, 0));
            /*
            input
            combobox
            input
            button
             */

        mainFrame.setLayout(new FlowLayout());

        JComboBox op;


        JButton btnCalc = new JButton("Calcule");
        btnCalc.setActionCommand("Action");
        txtNum1 = new JTextField(30);
        JTextField txtNum2 = new JTextField(30);
        op = new JComboBox<>();
        op.addItem("+");
        op.addItem("-");
        op.addItem("*");
        op.addItem("/");


        btnCalc.addActionListener(new BtnHandler());
        mainFrame.add(txtNum1);
        mainFrame.add(txtNum2);
        mainFrame.add(btnCalc);
        mainFrame.setVisible(true);
    }

    private class BtnHandler implements ActionListener {

        @Override
        public void actionPerformed(ActionEvent e) {
            String command = e.getActionCommand();

            switch(command) {
                case "Action":
                    System.out.println("My first event");
                    JOptionPane.showMessageDialog(null, txtNum1);
                    break;
                default:
                    System.out.println("Invalid Action");
            }
        }

    }
}