/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   MorDutAgaci.h
 * Author: Hüseyin
 *
 * Created on 05 Ocak 2019 Cumartesi, 20:49
 */

#ifndef MORDUTAGACI_H
#define MORDUTAGACI_H
#include <stdio.h>
#include <iostream>

#include "DutAgaci.h"
using namespace std;

class MorDutAgaci : public DutAgaci {
public:
    MorDutAgaci();
    MorDutAgaci(const MorDutAgaci& orig);
    virtual ~MorDutAgaci();
    int meyveSayisi = 300;
    void meyveSayisiniYaz();
private:

};

#endif /* MORDUTAGACI_H */

