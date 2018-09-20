//
//  main.cpp
//  Kingdom Champ
//
//  Created by Pato Saldivar on 05/10/17.
//  Copyright © 2017 Pato Saldivar. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;

int main (){

    int Champs, Wons, Battles=0, Counter;
    do{
    cin >> Champs >> Wons;
    }while ((Champs <0)||(Wons>1000));
    
    Counter= Champs;
    if (Wons > Champs/2){
        cout << -1;
    return 0;}

    for (int i=1; i<=Counter; i++) {
    Champs--;
    Battles= Champs+ Battles;
        
    
    }
    if (Battles == (Wons*Counter))
    cout << Battles;
   
    
    else
        cout << -1;
    return 0;
    
}
