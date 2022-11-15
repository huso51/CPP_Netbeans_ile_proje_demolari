/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Hüseyin
 *
 * Created on 24 Ağustos 2018 Cuma, 22:22
 */

#include <cstdlib>
#include <stdio.h>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {

    printf("1 Elma / 2 Armut / 3 Muz / 4 Ananas / 5 Kiraz");
    short meyve = 0;
    short elma = 0;
    scanf("%d",&meyve);
    switch(meyve){
        case 1:
            cout << "Elmayı sevmem!" << endl;
            cout << "Elmayı nasıl yersin? 1 Soyarak / 2 Soymadan" << endl;
            cin >> elma;
            switch(elma){
                case 1:
                    cout << "Terbiyesiz" << endl;
                    break;
                case 2:
                    cout << "Ahlaksız sapık" << endl;
                    break;
                default:
                    cout << "Ebeninki!" << endl;
                    break;
            }
            break;
        case 2:
            cout << "Armut'u hiç sevmem!" << endl;
            break;
        case 3:
            cout << "Muz çok güzel!" << endl;
            break;
        case 4:
            cout << "Çarşıda ananasaldırdım!" << endl;
            break;
        case 5:
            cout << "Kiraz eşki!" << endl;
            break;
        default:
            cout << "Bi boku beğenmiyon amk" << endl;
            break;
    }
    return 0;
}

