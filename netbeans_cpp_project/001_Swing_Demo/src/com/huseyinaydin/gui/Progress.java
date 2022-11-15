/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package com.huseyinaydin.gui;

import java.awt.FlowLayout;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.awt.event.MouseAdapter;
import java.awt.event.MouseEvent;
import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JProgressBar;
import javax.swing.Timer;

/**
 *
 * @author Hüseyin
 */
public class Progress {
    public static void main(String[] args) {
        Xyy xyz = new Xyy();
    }
}
class Xyy extends JFrame{

    JProgressBar jProgressBar;
    JButton jButton;
    public Xyy() {
        jProgressBar = new JProgressBar(0, 100);
        Timer timer = new Timer(85, new ActionListener() {
            int i = 0;
            @Override
            public void actionPerformed(ActionEvent ae) {
                if(i == 100){
                    new Addition();
                    //dispose();
                }
                jProgressBar.setValue(i);
                i++;
            }
        });
        jButton = new JButton("Başlat");
        jButton.addActionListener(ae->{
            timer.start();
        });
        add(jProgressBar);
        add(jButton);
        setLayout(new FlowLayout()); //flow layout, gridlayout, null
        setVisible(true);
        setSize(250, 250);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    }
}