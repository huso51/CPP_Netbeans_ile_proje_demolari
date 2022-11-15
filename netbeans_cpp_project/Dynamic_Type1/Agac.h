/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Agac.h
 * Author: Hüseyin
 *
 * Created on 05 Ocak 2019 Cumartesi, 20:47
 */

#ifndef AGAC_H
#define AGAC_H
#include <stdio.h>
#include <iostream>
using namespace std;

class Agac {
public:
    Agac();
    Agac(const Agac& orig);
    virtual ~Agac();
    int govdeSayisi = 2;
    void govdeSayisiniYaz();
private:

};

#endif /* AGAC_H */

