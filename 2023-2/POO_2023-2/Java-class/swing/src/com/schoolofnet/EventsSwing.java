package com.schoolofnet;

import javax.swing.*;
import java.awt.*;

public class EventsSwing {
    public EventsSwing(){
        showGUI();
    }

    public static void main(String[] args) {
        EventsSwing main = new EventsSwing();
    }
    private void showGUI() {
//                Frame initial configuration
        JFrame mainFrame = new JFrame();
        mainFrame.setSize(400,300);
        mainFrame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        mainFrame.setVisible(true);

//        Panel configuration
        JPanel mainPanel = new JPanel();

        mainPanel.setLayout(new FlowLayout());

        mainFrame.add(mainPanel);

        JButton btnAction = new JButton("Click Here");
        btnAction.setActionCommand("Action");

        btnAction.addActionListener(new BtnHandler());
        mainPanel.add(btnAction);
    }
}
