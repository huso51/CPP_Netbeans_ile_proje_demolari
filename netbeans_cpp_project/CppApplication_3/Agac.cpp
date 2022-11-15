/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Agac.cpp
 * Author: Hüseyin
 * 
 * Created on 13 Ağustos 2018 Pazartesi, 13:45
 */

#include "Agac.h"
#include <iostream>
#include <stdio.h>
using namespace std;

Agac::Agac() {
    
}

Agac::Agac(const Agac& orig) {
}

Agac::~Agac() {
}

void Agac::yaz() {
    cout << this->dalSayisi << endl;
}

