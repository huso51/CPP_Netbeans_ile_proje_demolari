/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Hüseyin
 *
 * Created on 24 Ağustos 2018 Cuma, 13:29
 */

#include <assert.h>
#include <string>
#include <iostream>
#include <stdio.h>
#include <fstream>
#include <array>
#include <stdio.h>

using namespace std;
void artir(int* piSayi);
int main(const int argc, const char** argv) {
    int iSayi = 0;
    int *piSayi = &iSayi;
    int *pAiSayi = piSayi;
    int *pCiSayi = pAiSayi;
    (*pCiSayi)+=2;
    cout << &(*pCiSayi) << endl; // iSayi nin bellek adresini verir
    artir(&(*pCiSayi));
    
    cout << *pCiSayi << endl << (*pCiSayi) << endl << &(*pCiSayi) << endl << "--" << endl;
    
    cout << iSayi << endl << pAiSayi << endl << piSayi << endl << pCiSayi << endl << &pCiSayi << endl << argv[0];
    
    string s;
    s = "Selam";
    string* ps;
    ps = &s;
    *ps += " - Merhaba";
    cout << endl << s << endl;
    
    return 0;
}
void artir(int* piSayi){
    (*piSayi) += 2;
    cout << "Hi!" << endl << piSayi << endl;
    piSayi += 3;
    cout << "Hi!" << endl << piSayi << endl;
}
