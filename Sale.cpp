
/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Sale.cpp
 * Author: JOHANN SEBASTIAN JOYA BELTRAN
 * 201711476
 * 
 * Created on 5 de abril de 2020, 11:20 PM
 */
#include<string>
#include "Sale.h"

//FUNCION DEL ARCHIVO DE IMPLEMENTACION
Sale::Sale() {
}

//Implemetancion del constructor de la clase.
Sale::Sale(std::string name_articule, double cost, int amount) {
    setname_articule(name_articule);
    setcost(cost);
    setamount(amount);
}

void Sale::setname_articule(std::string name_articule){
    
    this->name_articule = name_articule;
    
}

void Sale::setcost(double cost){
    
    this->cost = cost;
} 

void Sale::setamount(int amount){
    this->amount = amount;
}

std::string Sale::getname_articule(){

return name_articule;    
}

double Sale::getcost(){
    return cost;
}

int Sale::getamount(){
    return amount;
    
}

double Sale::LiquidationSale(){

    return Calculatediscount();
    
}

double Sale::Calculatediscount(){
    
    int valor = 0;
    int descuento = 0;
    
    valor = getcost() * getamount();
    descuento = valor - (valor * 0.2);
    
    
    
    return descuento;
}

Sale::~Sale() {
}

