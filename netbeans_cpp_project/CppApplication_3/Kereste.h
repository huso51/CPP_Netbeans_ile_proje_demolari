/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Kereste.h
 * Author: Hüseyin
 *
 * Created on 14 Ağustos 2018 Salı, 01:07
 */

#ifndef KERESTE_H
#define KERESTE_H

#include "Agac.h"


class Kereste : public Agac {
public:
    int renk = 5;
    Kereste();
    Kereste(const Kereste& orig);
    virtual ~Kereste();
private:

};

#endif /* KERESTE_H */

