/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Hüseyin
 *
 * Created on 05 Ocak 2019 Cumartesi, 20:46
 */

#include <cstdlib>

#include "Agac.h"
#include "DutAgaci.h"
#include "MorDutAgaci.h"
#include "Su.h"
#include <stdio.h>
#include <iostream>
using namespace std;
/*
 * 
 */
int main(int argc, char** argv) {
    
    Agac *agac = new Agac();
    agac->govdeSayisiniYaz();
    
    /*Agac *agac2 = new DutAgaci();
    agac2->govdeSayisiniYaz();
    
    Agac *agac3 = new MorDutAgaci();
    agac3->govdeSayisiniYaz();*/
    
    DutAgaci *dutAgaci = new DutAgaci();
    dutAgaci->yaprakSayisiniYaz();
    
    MorDutAgaci *morDutAgaci = new MorDutAgaci();
    morDutAgaci->meyveSayisiniYaz();
    
    MorDutAgaci morDutAgaci2;
    
    Agac *agac2 = dynamic_cast<MorDutAgaci*>(&morDutAgaci2);
    agac2->govdeSayisiniYaz();
    
    if(agac2 = dynamic_cast<MorDutAgaci*>(&morDutAgaci2))
        cout << "Akrabağ" << endl;
    else 
        cout << "Akrabağ değil!" << endl;
    
    Su *su = new Su();
    
    if(su = dynamic_cast<Su*>(&morDutAgaci2))
        cout << "Akrabağ" << endl;
    else 
        cout << "Akrabağ değil!" << endl;
    
    Agac *agacx = new MorDutAgaci();
    agacx->govdeSayisiniYaz();
    ((MorDutAgaci*)agacx)->meyveSayisiniYaz();//sadece mor dut agacina ait fonksiyon
    ((DutAgaci*)agacx)->yaprakSayisiniYaz();//sadece dut agacina ait fonksiyon
    ((Agac*)agacx)->govdeSayisiniYaz();//sadece agaca ait fonksiyon
    return 0;
}

