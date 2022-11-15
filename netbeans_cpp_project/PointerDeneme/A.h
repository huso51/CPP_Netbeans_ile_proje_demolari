/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   A.h
 * Author: Hüseyin
 *
 * Created on 28 Ağustos 2018 Salı, 11:44
 */

#ifndef A_H
#define A_H

class A {
public:
    A();
    A(const A& orig);
    virtual ~A();
    void setDeger(int deger);
    int getDeger();
private:
    int deger;
};

#endif /* A_H */

