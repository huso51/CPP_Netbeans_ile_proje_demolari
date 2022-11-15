/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Hüseyin
 *
 * Created on 13 Ağustos 2018 Pazartesi, 13:44
 */

#include <cstdlib>
#include <assert.h>
#include <string>
#include <iostream>
#include <stdio.h>
#include <fstream>
#include <array>

#include "Agac.h"
#include "Kereste.h"
#include "Su.h"

using namespace std;

int* doldur();
int Agac::yaprakSayisi = 0;

array<int,5> fillArray();
int* generateRandomNumber(int generatedNumbers[22]);

enum gunler{
    pazar,cumaertesi,cuma,persembe,carsamba,sali,pazartesi
};

enum dortIslem{
    topla,cikar,carp,bol
};
float dortIslemYap(float sayi1,float sayi2,dortIslem islemModu);

int main(const int argc, const char** argv) {
    //Agac* agac = new Agac();
    //Agac* agac2 = new Agac();
    //agac->yaprakSayisi = 3;
    
    /*Agac* agac2 = new Agac();
    cout << agac2->yaprakSayisi << endl;
    
    int di[3];
    int* dizi = doldur(di);
    cout << dizi[0] << endl;
    
    int a = 10;
    cout << &agac << endl;*/
    /*Kereste kereste;
    Su su;*/
    
    /*agac2 = dynamic_cast<Agac*>(&kereste);
    
    if(agac2 = dynamic_cast<Agac*>(&kereste))
        cout << "Evet" << endl;
    else
        cout << "Hayır" << endl;*/
    
    //agac2->yaprakSayisi = 10;
    //agac2->dalSayisi = 3;
    //cout << agac2->yaprakSayisi << endl;
   // cout << agac2->dalSayisi << endl;
    //new Agac();
    /*Agac* odunumsu;
    
    odunumsu->dalSayisi = 44;
    odunumsu->yaprakSayisi = 2;
    cout << agac->dalSayisi << endl;
    
    Agac* odunumsu2;
    
    odunumsu2->dalSayisi = 3;
    odunumsu2->yaprakSayisi = 2;
    cout << odunumsu2->dalSayisi << endl << odunumsu2->yaprakSayisi << endl;*/
    //odunumsu->yaz();
    
    //cout << dizi << endl;
    
    /*array<int,5> dizi = fillArray();
    for(short i = 0; i < 5; i++)
        cout << dizi[i] << endl;
    
    cout << "------------------------------" << endl;
    
    int* dizi2 = doldur();
    for(short i = 0; i < 3; i++)
        cout << dizi[i] << endl;
    
    array<int,22> generatedRandomNumbers = generateRandomNumber();
    for(short i = 0; i < generatedRandomNumbers.max_size(); i++)
        cout << generatedRandomNumbers[i] << endl;*/
    
    /*int dizi[22];
    
    int* generatedRandomNumbers = generateRandomNumber(dizi);
    
    for(int i = 0; i < 22; i++){
        cout << generatedRandomNumbers[i] << endl;
    }*/
    
    /*cout << "------------------------------" << endl;
    
    int backup = 0;
    for(short i = 0; i < 22; i++){
        for(short j = 0; j < 22; j++){
            if(generatedRandomNumbers[i] > generatedRandomNumbers[j]){
                backup = generatedRandomNumbers[i];
                generatedRandomNumbers[i] = generatedRandomNumbers[j];
                generatedRandomNumbers[j] = backup;
            }
        }
    }
    
    cout << "------------------------------" << endl;
   
    
    for(short i = 0; i < 22; i++)
        cout << generatedRandomNumbers[i] << endl;
    
    
    backup = 0;
    for(short i = 0; i < 22; i++){
        for(short j = 0; j < 22; j++){
            if(generatedRandomNumbers[i] < generatedRandomNumbers[j]){
                backup = generatedRandomNumbers[i];
                generatedRandomNumbers[i] = generatedRandomNumbers[j];
                generatedRandomNumbers[j] = backup;
            }
        }
    }
    
    cout << "------------------------------" << endl;
   
    
    for(short i = 0; i < 22; i++)
        cout << generatedRandomNumbers[i] << endl;*/
    
    /*gunler a = pazar;
    gunler b = pazartesi;
    
    if(a>b){
        cout << "a büyük" << endl;
    }
    else if(a<b)
        cout << "b büyük" << endl;
    else
        cout << "iki gün birbirine eşit" << endl;*/
    float s1 = 0,s2 = 0;
    
    dortIslem islemModu = topla;
    
    char m = '.';
    
    printf("Sayi 1'i giriniz : ");
    scanf("%f",&s1);
    
    printf("Sayi 2'yi giriniz : ");
    scanf("%f",&s2);
    
    printf("Islem modunu giriniz (1 - topla, 2 - Cikar, 3 - Carp, 4 Bol) : ");
    scanf("%s",&m);
    if(m == '1')
        islemModu = topla;
    else if(m == '2')
        islemModu = cikar;
    else if(m == '3')
        islemModu = carp;
    else if(m == '4')
        islemModu = bol;
    
    
    float sonuc = dortIslemYap(s1,s2,islemModu);
    printf("sonuc : %f",sonuc);
    char a = 'a';
    scanf("%s",&a);
    return 0;
}

float dortIslemYap(float sayi1,float sayi2,dortIslem islemModu){
    cout << sayi1 << endl;
    cout << sayi2 << endl;
    if(islemModu == topla){
        return sayi1 + sayi2;
    }
    else if(islemModu == cikar){
        return (sayi1 - sayi2);
    }
    else if(islemModu == bol){
        return sayi1 / sayi2;
    }
    else if(islemModu == carp){
        return sayi1 * sayi2;
    }
}

int* doldur(){
    int dizi[3];
    for(short i = 0; i < 3; i++)
        dizi[i] = rand() / 10000000;
    return dizi;
}
array<int,5> fillArray(){
    array<int,5> dizi;
    for(short i = 0; i < 5; i++)
        dizi[i] = rand() / 10000000;
    return dizi;
}



int* generateRandomNumber(int generatedNumbers[22]){
    for(int i = 0; i < 22; i++)
	generatedNumbers[i] = 0;
    bool state = false;
    int generatedNumber = 0;
    for(int i = 0; i < 22; i++){
        state = false;
        while(!state){
            generatedNumber = rand() / 10000000;
            for(int j = 0; j < 22; j++){
                if(generatedNumbers[j] == generatedNumber)
                    break;
                if(j == 22-1)
                    state = true;
            }
        }
        generatedNumbers[i] = generatedNumber;
    }
    
    for(int i = 0; i < 22; i++)
        cout << generatedNumbers[i] << endl;
    return generatedNumbers;
}