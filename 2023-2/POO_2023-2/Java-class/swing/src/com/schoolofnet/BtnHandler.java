package com.schoolofnet;

import javax.swing.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

class BtnHandler implements ActionListener {
    @Override
    public void actionPerformed(ActionEvent actionEvent) {
        String command = actionEvent.getActionCommand();

        switch (command) {
            case "Action":
                System.out.println("My first event");
                JOptionPane.showMessageDialog(null, "My first event");
                break;
            default:
                System.out.println("Invalid Action");
        }
    }
}
