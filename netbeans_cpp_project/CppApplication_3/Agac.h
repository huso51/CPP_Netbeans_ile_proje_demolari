/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Agac.h
 * Author: Hüseyin
 *
 * Created on 13 Ağustos 2018 Pazartesi, 13:45
 */

#ifndef AGAC_H
#define AGAC_H

class Agac {
public:
    static int yaprakSayisi;
    int dalSayisi = 0;
    Agac();
    Agac(const Agac& orig);
    virtual ~Agac();
    void yaz();
private:

};

#endif /* AGAC_H */

