//
//  main.cpp
//  Prime Sport
//
//  Created by Pato Saldivar on 24/09/18.
//  Copyright © 2018 Pato Saldivar. All rights reserved.
//

#include <iostream>
using namespace std;

int const millon=1000000;
int arr[millon];
int main() {
    int X2, resp;
    cin >> X2;
    //Alamcenas los intervalos y factorizaciones de cada posibilidad
    for (int i=2; i<=X2; i++) {
        if (arr[i]==0){
            for (int j= i*2; j<=X2; j+=i) {
                arr[j]=i;
            }
        }
        arr[i]= i-arr[i]+1;
    }
    //Factorizas el X2 y Comienzas a factorizar X1 para encontrar el minimo
    resp= X2;
    for (int i= arr[X2]; i<=X2; i++) {
        resp= min(resp, arr[i]);
    }
    cout<< resp;
    return 0;
}
