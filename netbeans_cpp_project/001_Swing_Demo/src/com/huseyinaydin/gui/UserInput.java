/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package com.huseyinaydin.gui;

import java.awt.FlowLayout;
import java.awt.event.ItemEvent;
import java.awt.event.ItemListener;
import javax.swing.ButtonGroup;
import javax.swing.JButton;
import javax.swing.JCheckBox;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JRadioButton;
import javax.swing.JTextField;

/**
 *
 * @author Hüseyin
 */
public class UserInput {
    public static void main(String[] args) {
        RadioDemo radioDemo = new RadioDemo();
    }
}
class RadioDemo extends JFrame{
    JTextField t1;
    JButton b1;
    JRadioButton r1,r2;
    JLabel l1;
    JCheckBox c1,c2;
    public RadioDemo() {
        t1 = new JTextField(15);
        b1 = new JButton("OK");
        r1 = new JRadioButton("Erkek");
        r2 = new JRadioButton("Kadın");
        l1 = new JLabel("Greeting");
        c1 = new JCheckBox("Danscı");
        c2 = new JCheckBox("Şarkıcı");
        c1.addItemListener(new ItemListener() {
            @Override
            public void itemStateChanged(ItemEvent ıe) {
                System.out.println("Dansçı");
            }
        });
        c2.addItemListener(new ItemListener() {
            @Override
            public void itemStateChanged(ItemEvent ıe) {
                System.out.println("Şarkıcı");
            }
        });
        ButtonGroup buttonGroup = new ButtonGroup();
        buttonGroup.add(r1);
        buttonGroup.add(r2);
        b1.addActionListener(ae->{
            String name = t1.getText();
            if(r1.isSelected())
                name = "Bay " + name;
            else
                name = "Bayan " + name;
            if(c1.isSelected())
                name += " - Dansçı";
            if(c2.isSelected())
                name += " - Şarkıcı";
            l1.setText(name);
        });
        add(t1);
        add(b1);
        add(r1);
        add(r2);
        add(c1);
        add(c2);
        add(l1);
        setLayout(new FlowLayout()); //flow layout, gridlayout, null
        setVisible(true);
        setSize(250, 250);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    }
}
