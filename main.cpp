 /*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: MIGUEL
 *
 * Created on 5 de abril de 2020, 11:19 PM
 */

#include <cstdlib>
#include <iostream>
#include "Sale.h"



using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    Sale sale("CROYDON",20000,5);
    
    cout<<"Venta :"<<sale.getname_articule()<<endl;
    cout<<"Precio unitario  : "<<sale.getcost()<<  " Cantidad a comprar :  " <<sale.getamount()<<endl;
    cout<<"La liquidacion de la venta es de : "<<sale.LiquidationSale()<<endl;
    
    Sale* shirt = new Sale("Chevignon",50000,6);
    
    cout<<" VENTA :"<<shirt->getname_articule()<<endl;
    cout<<"Precio unitario  : "<<shirt->getcost()<<  " Cantidad a comprar :  " <<shirt->getamount()<<endl;
    cout<<"La liquidacion de la venta es de : "<<shirt->LiquidationSale()<<endl;
    
    return EXIT_SUCCESS;
}

