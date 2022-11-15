/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Hüseyin
 *
 * Created on 28 Ağustos 2018 Salı, 11:43
 */

#include <cstdlib>
#include <stdio.h>
#include <iostream>
#include "A.h"

using namespace std;

/*
 * 
 */
void uygula(A* a);
void uygula(int* pDeger);
int* uygulaDizi(int dizi[5]);
int uygula(int deger);
int main(int argc, char** argv) {
    int sayi = 5;
    int* xSayi = &sayi;
    uygula(xSayi);
    cout << sayi << endl;
    
    int c = 1;
    int t = 0;
    t = uygula(c);
    cout << c << endl << t << endl << endl;
    
    int dizi[5];
    uygulaDizi(dizi);
    for(int i = 0; i < 5; i++){
        cout << dizi[i] << endl;
    }
    
    A* a = new A();
    uygula(a);
    cout << a->getDeger() << endl;
    
    cout << "Kapanmak için bir harf girip entere basın!" << endl;
    short u = 0;
    scanf("%d",&u);
    return 0;
}

void uygula(int* pDeger){
    (*pDeger) = 88;
}

int uygula(int deger){
    deger = 7;
    return deger;
}

void uygula(A* a){
    a->setDeger(5);
}

int* uygulaDizi(int dizi[5]){
    for(int i = 0; i < 5; i++){
        dizi[i] = 4;
    }
    return dizi;
}

