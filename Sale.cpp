
/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Sale.cpp
 * Author: MIGUEL
 * 
 * Created on 5 de abril de 2020, 11:20 PM
 */

#include "Sale.h"
#include<iostream>
#include<string>

//FUNCION DEL ARCHIVO DE IMPLEMENTACION
Sale::Sale() {
}

Sale::Sale(std::string namearticule, double cost, short int amount) {
    this->name_articule = namearticule;
    this->cost = cost;
    this->amount = amount;
}

void Sale::setname_articule(std::string name){
    
    Sale::name_articule = name;
    
}

void Sale::setcost(double cost){
    
    Sale::cost = cost;
} 

void Sale::setamount(short int amount){
    Sale::amount = amount;
}

std::string Sale::getname_articule(){

return name_articule;    
}

double Sale::getcost(){
    return 0;
}

short int Sale::getamount(){
    return 0;
    
}

Sale::~Sale() {
}

