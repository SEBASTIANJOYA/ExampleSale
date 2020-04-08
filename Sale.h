/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Sale.h
 * Author: MIGUEL
 *
 * Created on 5 de abril de 2020, 11:20 PM
 */

#ifndef SALE_H
#define SALE_H
#include<iostream>
#include<string>
//FUNCIONANMIENTO DE ARCHIVO DE CABECERA
class Sale {
public:
    Sale();
    Sale(std::string, double, short int);
    void setname_articule(std::string);
    void setcost(double);
    void setamount(short int);
    
    std::string getname_articule();
    double getcost();
    short int getamount();
    double LiquidationSale();
    
    virtual ~Sale();
    
private:
    
    std::string name_articule;
    double cost;
    short int amount;
    double Calculatediscount();

};

#endif /* SALE_H */

