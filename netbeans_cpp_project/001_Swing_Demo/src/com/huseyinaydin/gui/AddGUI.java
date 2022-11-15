/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package com.huseyinaydin.gui;

import java.awt.FlowLayout;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JTextField;

/**
 *
 * @author Hüseyin
 */
public class AddGUI {

    public static void main(String[] args) {
        Addition addition = new Addition();
    }
}

class Addition extends JFrame {

    JTextField jTextField;
    JTextField jTextField2;
    JLabel jLabel;
    JButton jButton;

    public Addition() {
        jTextField = new JTextField(20);
        jTextField2 = new JTextField(20);
        jLabel = new JLabel("Sonuç: ");
        jButton = new JButton("OK");
        /*jButton.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent ae) {
                System.out.println("Merhaba dünya");
                double s1 = Double.parseDouble(jTextField.getText());
                double s2 = Double.parseDouble(jTextField2.getText());
                double sonuc = (s1 + s2);
                jLabel.setText(String.valueOf(sonuc));
            }
        });*/
        jButton.addActionListener(ae -> {
            System.out.println("toplama işlemi yapılacak!");
            double s1 = Double.parseDouble(jTextField.getText());
            double s2 = Double.parseDouble(jTextField2.getText());
            double sonuc = (s1 + s2);
            jLabel.setText(String.valueOf(sonuc));
        });
        add(jTextField);
        add(jTextField2);
        add(jLabel);
        add(jButton);

        setLayout(new FlowLayout()); //flow layout, gridlayout, null
        setVisible(true);
        setSize(250, 250);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    }
}
