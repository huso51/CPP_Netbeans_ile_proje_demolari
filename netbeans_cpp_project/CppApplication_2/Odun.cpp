/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Odun.cpp
 * Author: Hüseyin
 * 
 * Created on 11 Ağustos 2018 Cumartesi, 00:08
 */

#include "Odun.h"
Odun::Odun() {
    this->odunSayisi = 22;
}

Odun::Odun(const Odun& orig) {
    
}

Odun::~Odun() {
    cout << "Odun yıkıldı!" << endl;
}

void Odun::odunSayisiniYaz() {
    printf("%d\n",this->odunSayisi);
}

void Odun::setOdunSayisi(int odunSayisi) {
    this->odunSayisi = odunSayisi;
}

int Odun::getOdunSayisi() {
    return this->odunSayisi;
}



