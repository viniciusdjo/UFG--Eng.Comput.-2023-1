package org.ufg;

import javax.swing.*;

public class ExemploJanelaSwing {
    public static void main(String[] args) {
        // Cria uma janela
        JFrame janela = new JFrame("Primeira janela");

        //Definir o tamanho da janela
        janela.setSize(400,300);

        //Defini o comportamento ao fechar a janela
        janela.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

        //Cria uma label para exibir texto
        JLabel rotulo = new JLabel("Olá, mundo", SwingConstants.CENTER);

        // Adiciona o rótulo a janela
        janela.add(rotulo);

        //Centralozar a janela na tela
        janela.setLocationRelativeTo(null);

        //Tornar a janela visível
        janela.setVisible(true);
    }
}
