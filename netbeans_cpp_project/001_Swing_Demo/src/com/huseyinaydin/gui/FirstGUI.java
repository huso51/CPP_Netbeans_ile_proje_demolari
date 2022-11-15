/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package com.huseyinaydin.gui;

import java.awt.FlowLayout;
import javax.swing.JFrame;
import javax.swing.JLabel;

/**
 *
 * @author Hüseyin
 */
public class FirstGUI {
    public static void main(String[] args) {
        Abc abc = new Abc();
        
    }
}
class Abc extends JFrame{ //card layout

    public Abc() {
        
        JLabel jLabel = new JLabel("merhaba dünya!");
        JLabel jLabel2 = new JLabel("merhaba dünya 2");
        add(jLabel);
        add(jLabel2);
        
        setLayout(new FlowLayout()); //flow layout, gridlayout, null
        setVisible(true);
        setSize(250, 250);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    }
}
