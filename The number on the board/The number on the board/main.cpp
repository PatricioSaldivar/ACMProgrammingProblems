//
//  main.cpp
//  The number on the board
//
//  Created by Pato Saldivar on 24/09/18.
//  Copyright © 2018 Pato Saldivar. All rights reserved.
//

#include <string>
#include <iostream>
using namespace std;
int k, nArr[10];
string n;
int main() {
    
    
    cin>> k >> n;
    int aux=0;
    for (int i=0; i< n.length(); i++) {
        int digitos= n[i]- '0';
        nArr[digitos]++;
        aux+= digitos;
    }
    
    int resp=0;
    for (int i=0; i<9; i++) {
        for (int j=0; j<nArr[i]; j++) {
            if (aux<k){
                aux+= 9-i;
                resp++;
            }
        }
    }
    cout<< resp<<endl;
    
    return 0;
}
