/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Hüseyin
 *
 * Created on 05 Ağustos 2018 Pazar, 17:50
 */

#include <assert.h>
#include <string>
#include <iostream>
#include <stdio.h>
#include <fstream>
#include "Odun.h"

using namespace std; //c++ ı dahil eder
#define basla {;
#define bitir };

class Kalem {
public:
    int kalemSayisi = rand() / 90000;

    Kalem() {
        //this->kalemSayisi = 0;
    }

    ~Kalem() {

    }

    virtual void yaz() {
        printf("Selam ben kalem!\n");
    }
};

class DolmaKalem : public Kalem {
public:

    DolmaKalem() {

    }

    ~DolmaKalem() {

    }


};
//final ultimate (nihai sınıf) yani(nihayetine ermiş sınıf)

class PilotKalem : public DolmaKalem {
public:

    PilotKalem() {

    }

    ~PilotKalem() {

    }

};

class Kisi {
private:
    int tcNo;
    string isim;
    string soyIsim;
    string dTar;
    double maas;

public:

    Kisi() {
        cout << "Kişi class'ı / yapısı yapıldı!\n"; //constructor (yapıcı fonksiyon)
    }

    ~Kisi() {
        cout << "Kişi class'ı / yapısı yıkıldı!\n"; //destructor (yıkıcı fonksiyon)
    }

    int getTcNo() {
        return this->tcNo;
    }

    void setTcNo(int tcNo) {
        this->tcNo = tcNo;
    }

    string getIsim() {
        return this->isim;
    }

    void setIsim(string isim) {
        this->isim = isim;
    }

    string getSoyIsim() {
        return this->soyIsim;
    }

    void setSoyIsim(string soyIsim) {
        this->soyIsim = soyIsim;
    }

    string getDTar() {
        return this->dTar;
    }

    void setDTar(string dTar) {
        this->dTar = dTar;
    }

    double getMaas() {
        return this->maas;
    }

    void setMaas(double maas) {
        this->maas = maas;
    }
};

class NonZeroException {
public:
    string hata = "";

    NonZeroException(string hata = "sıfıra bölünmez") {
        this->hata = hata;
    }

    ~NonZeroException() {

    }

    void yaz() {
        cout << hata << endl;
    }
};

void bilgileriAl(Kisi* pKisi);
void bilgileriEkranaYaz(Kisi* pKisi);
void bilgileriKisiNesnesineKopyala(Kisi* pKisi, const int tcNo, const string isim, const string soyisim, const string dTar, const double maas);
short* sayi(short a[3]);
int* rastgeleSayiUret(int dizi[22]);
int* buyuktenKucugeSirala(int* dizi,char d);

void yazz()
basla
    printf("selam\n");
bitir
int main() {
    /*Kisi* kisi = new Kisi();
    bilgileriAl(kisi);

    fstream dosya;
    dosya.open("C:\\Users\\Public\\Documents\\dosya.dat", ios::trunc | ios::app | ios::out | ios::in);

    dosya.write((char*) &kisi, sizeof (Kalem));
    dosya.flush();
    dosya.close();
    printf("Kaydınız başarı ile alındı!\n");
    dosya.open("C:\\Users\\Public\\Documents\\dosya.dat", ios::binary | ios::in);
    dosya.read((char*) &kisi, sizeof (Kalem));
    bilgileriEkranaYaz(kisi);
    dosya.close();
    delete kisi;*/
    /*PilotKalem* pltKlm = new PilotKalem();
    pltKlm->yaz();*/

    /*Odun* odun = new Odun();
    printf("Odun sayısını giriniz : ");
    int odunSayisi = 0;
    scanf("%d",&odunSayisi);
    odun->setOdunSayisi(odunSayisi);
    odun->odunSayisiniYaz();
    //scanf("%d",c);
    delete odun;*/
    /*short d[3];
    short* a = sayi(d);
    short i = 0;
    while (i < 3) {
        cout << a[i] << endl;
        i++;
    }*/
    yazz();
    int diziS[22];
    int* diziY = rastgeleSayiUret(diziS);
    int* dizi = buyuktenKucugeSirala(diziY,'>');
    int i = 0;
    while(i < 22){
        cout << dizi[i] << "vurdur " << diziS[i] << endl;
        i++;
    }
    int c = 0;
    scanf("%d",&c);
    return 0;
}

int* buyuktenKucugeSirala(int* dizi,char d){
    int yedek = 0;
    for(int i = 0; i < 22; i++){
        for(int j = 0; j < 22; j++){
            if(dizi[i] > dizi[j]){
                yedek = dizi[i];
                dizi[i] = dizi[j];
                dizi[j] = yedek;
            }
        }
    }
    return dizi;
}

int* rastgeleSayiUret(int dizi[22]){
    bool uretimDurumu = false;
    int uretilenSayi = 0;
    for(int i = 0; i < 22; i++){
        uretimDurumu = false;
        while(!uretimDurumu){
            uretilenSayi = rand() / 59900000;
            for(int j = 0; j < 22; j++){
                if(dizi[j] == uretilenSayi)
                    break;
                if(j == 22-1)
                    uretimDurumu = true;
            }
        }
        dizi[i] = uretilenSayi;
    }
    return dizi;
}

void bilgileriAl(Kisi* pKisi) {
    printf("TC NO Giriniz : ");
    int tcNo = 0;
    scanf("%d", &tcNo);
    printf("İsim Giriniz : ");
    string isim = "";
    cin >> isim;
    printf("Soyisim giriniz : ");
    string soyisim = "";
    cin >> soyisim;
    printf("Doğum tarihi giriniz : ");
    string dTar = "";
    cin >> dTar;
    printf("Maaş giriniz : ");
    double maas = 0;
    cin >> maas;
    bilgileriKisiNesnesineKopyala(pKisi, tcNo, isim, soyisim, dTar, maas);
}

void bilgileriEkranaYaz(Kisi* pKisi) {
    cout << pKisi->getTcNo() << endl;
    cout << pKisi->getIsim() << " " << pKisi->getSoyIsim() << endl;
    cout << pKisi->getDTar() << endl;
    cout << pKisi->getMaas() << endl;
}

void bilgileriKisiNesnesineKopyala(Kisi* pKisi, const int tcNo, const string isim, const string soyisim, const string dTar, const double maas) {
    pKisi->setTcNo(tcNo);
    pKisi->setIsim(isim);
    pKisi->setSoyIsim(soyisim);
    pKisi->setDTar(dTar);
    pKisi->setMaas(maas);
}

short* sayi(short a[3]) {
    a[0] = 1;
    a[1] = 2;
    a[2] = 3;
    return a;
}



