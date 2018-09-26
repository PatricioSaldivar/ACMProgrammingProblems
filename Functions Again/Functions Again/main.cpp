//
//  main.cpp
//  Functions Again
//
//  Created by Pato Saldivar on 25/09/18.
//  Copyright © 2018 Pato Saldivar. All rights reserved.
//
#include <algorithm>
#include <iostream>
using namespace std;
long long const N=100005;
long long arr[N];
long long arrSumas[N-1];

int main() {
 
    int n;
    long long suma=0, suma2=0, max=0, aux=0;
    cin >>n;
    
    for (int i=0; i<n; i++) {
        cin>> arr[i];
    }
    
    for (int i=0; i<n-1; i++) {
        arrSumas[i]= arr[i]- arr[i+1];
        if (arrSumas[i]<0) arrSumas[i]*= -1;
    }
    
    
    for (int i=0 ; i<n; i++) {
        int m=1;
        if (i%2!=0) {
            m=-1;
        }
        suma+=arrSumas[i]*m;
        if (max<suma) {
            max=suma;
        }
    }
    //CAsos especiales
    
    if(n%2==0){
        suma=0;
    for (int i=1 ; i<n-1; i++) {
        int m=-1;
        if (i%2!=0) {
            m=1;
        }
        suma=aux+arrSumas[i]*m ;
        if(suma > arrSumas[i]*m)
            aux = suma;
        else
            aux = arrSumas[i]*m;
        if (aux>suma2) {
            suma2=aux;
            }
        }
    }
    
    
    if (max>=suma2) {
        cout<< max;
    }else
        cout<< suma2;
    
    return 0;
}

