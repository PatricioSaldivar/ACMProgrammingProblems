//
//  main.cpp
//  Sereja and Sufixes
//
//  Created by Pato Saldivar on 25/09/18.
//  Copyright © 2018 Pato Saldivar. All rights reserved.
//

#include <iostream>
#include <set>
using namespace std;



long long const Limi = 100005;
long long arrayN[Limi];
long long arrayL[Limi];



int main() {
    long long arrayNumbers[Limi];
    set<long long> Numeros;
    int n, m;
    cin>> n >> m;
    for (int i=1; i<=n; i++) {
        cin>> arrayN[i];
    }
    for (int i=n; i>0; i--) {
        Numeros.insert(arrayN[i]);
        arrayNumbers[i-1]=Numeros.size();
    }
    
    for (int i=0; i<m; i++) {
        cin>> arrayL[i];
        cout<< arrayNumbers[arrayL[i]-1]<<endl;
    }
    


  
    return 0;
}
