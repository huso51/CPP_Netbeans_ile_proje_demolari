/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   DutAgaci.h
 * Author: Hüseyin
 *
 * Created on 05 Ocak 2019 Cumartesi, 20:48
 */

#ifndef DUTAGACI_H
#define DUTAGACI_H

#include "Agac.h"
#include <stdio.h>
#include <iostream>
using namespace std;


class DutAgaci : public Agac {
public:
    DutAgaci();
    DutAgaci(const DutAgaci& orig);
    virtual ~DutAgaci();
    int yaprakSayisi = 10;
    void yaprakSayisiniYaz();
private:

};

#endif /* DUTAGACI_H */

