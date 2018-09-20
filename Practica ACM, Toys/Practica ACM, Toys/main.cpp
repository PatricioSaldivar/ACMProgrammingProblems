//
//  main.cpp
//  Practica ACM, Toys
//
//  Created by Pato Saldivar on 06/09/18.
//  Copyright © 2018 Pato Saldivar. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    int num, precio, contador = 0;
    cin>> num >> precio;
    
    if (num>=precio) {
        contador=(precio%2==1)? contador= precio/2 : contador= precio/2 -1;
    }
    
    else if(num*2>precio){
        contador= num-precio/2 ;
    }
    else {
        contador=0;
    }
    cout<< contador<<endl;
    
}
