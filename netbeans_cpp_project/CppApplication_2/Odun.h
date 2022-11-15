/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Odun.h
 * Author: Hüseyin
 *
 * Created on 11 Ağustos 2018 Cumartesi, 00:08
 */

#ifndef ODUN_H
#define ODUN_H
#include <string>
#include <iostream>
#include <stdio.h>
#include <fstream>
using namespace std;

class Odun {
public:
    int odunSayisi = 3;
public:
    Odun();
    Odun(const Odun& orig);
    ~Odun();
    void odunSayisiniYaz();
    void setOdunSayisi(int odunSayisi);
    int getOdunSayisi();
};

#endif /* ODUN_H */

