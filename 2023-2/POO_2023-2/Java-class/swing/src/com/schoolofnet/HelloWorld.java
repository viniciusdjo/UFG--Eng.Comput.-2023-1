package com.schoolofnet;

import javax.swing.*;

public class HelloWorld {
    public static void main(String[] args) {
        JFrame frame = new JFrame();
        JLabel lblHello = new JLabel("Hello World From Java Swing", SwingConstants.CENTER);

        frame.setBounds(100, 100, 250, 200);

        frame.add(lblHello);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setTitle("First Frame");
        frame.setVisible(true);
    }
}