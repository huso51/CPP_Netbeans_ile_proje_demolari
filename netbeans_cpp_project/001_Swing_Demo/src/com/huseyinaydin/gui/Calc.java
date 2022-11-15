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
public class Calc {

    public static void main(String[] args) {
        AddSub addSub = new AddSub();
    }
}

class AddSub extends JFrame implements ActionListener {

    JTextField t1, t2;
    JButton b1, b2;
    JLabel l1;

    public AddSub() {
        t1 = new JTextField(15);
        t2 = new JTextField(15);
        b1 = new JButton("Add");
        b2 = new JButton("Sub");
        l1 = new JLabel("Sonuç: ");
        b1.addActionListener(this);
        b2.addActionListener(this);
        add(t1);
        add(t2);
        add(b1);
        add(b2);
        add(l1);
        setLayout(new FlowLayout()); //flow layout, gridlayout, null
        setVisible(true);
        setSize(250, 250);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    }

    @Override
    public void actionPerformed(ActionEvent ae) {
        System.out.println("toplama işlemi yapılacak!");
        double s1 = Double.parseDouble(t1.getText());
        double s2 = Double.parseDouble(t2.getText());
        double sonuc;
        if(ae.getSource() == b1)
            sonuc = (s1 + s2);
        else
            sonuc = (s1 - s2);
        l1.setText(String.valueOf(sonuc));
    }
}
