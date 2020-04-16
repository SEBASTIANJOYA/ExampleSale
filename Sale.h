/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Sale.h
 * Author: JOHANN SEBASTIAN JOYA
 * 201711476.
 * Created on 5 de abril de 2020, 11:20 PM
 */

#ifndef SALE_H
#define SALE_H
#include<string>

//FUNCIONANMIENTO DE ARCHIVO DE CABECERA
class Sale {
public:
    Sale();
    Sale(std::string, double, int); //Constructor.
    
    //Metodos GET y SET.
    
    void setname_articule(std::string);
    void setcost(double);
    void setamount(int);
    
    std::string getname_articule();
    double getcost();
    int getamount();
    
    //Declaracion del Metodo para liquidar la cuenta.
    double LiquidationSale();
    
    virtual ~Sale();
    
private:
    
    //Declaracion de los atributos a utilizar
    std::string name_articule;
    double cost;
    int amount;
    double Calculatediscount();

};

#endif /* SALE_H */

