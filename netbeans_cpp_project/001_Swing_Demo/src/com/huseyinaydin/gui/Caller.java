/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package com.huseyinaydin.gui;

import java.awt.FlowLayout;
import javax.swing.JButton;
import javax.swing.JFrame;

/**
 *
 * @author Hüseyin
 */
public class Caller {
    public static void main(String[] args) {
        X x = new X();
    }
}
class X extends JFrame{

    public X() {
        JButton jButton = new JButton("Show");
        jButton.addActionListener(ae->{
            new Addition();
            dispose();
        });
        add(jButton);
        setLayout(new FlowLayout()); //flow layout, gridlayout, null
        setVisible(true);
        setSize(250, 250);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    }
}
