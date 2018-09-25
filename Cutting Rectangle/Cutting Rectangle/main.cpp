//
//  main.cpp
//  Cutting Rectangle
//
//  Created by Pato Saldivar on 24/09/18.
//  Copyright © 2018 Pato Saldivar. All rights reserved.
//
#include <cmath>
#include <iostream>
using namespace std;
int const Limit=200000;

long long gcd(long long a, long long b){
    if (b)
        return gcd(b, a % b);
    return a;
}



long long w[Limit], h[Limit], cant[Limit];
int main() {
    
    
    
    long long totalSquares=0, minorCommonW=0, minorCommonH=0, possibles;
    long long numRect, resp=0;
    cin>> numRect;
    for (int i=0; i<numRect; i++) {
        cin >> w[i] >> h[i] >> cant[i];
    }
    for (int i=0; i<numRect; i++) {
        if (numRect==1){
            minorCommonH =h[i];
            minorCommonW=w[i];
            
        }
        
        if(w[i]==w[i+1])minorCommonW= w[i];
        if(h[i]==h[i+1])minorCommonH= h[i];
        totalSquares+= w[i]*h[i]*cant[i];
    }
    if (minorCommonH ==0 && minorCommonW==0) {
        cout<< "0";
        return 0;
    }
    
    long long GreatestCommon= cant[0];
    for (int i=1; i<numRect; i++) {
        gcd(GreatestCommon, cant[i]);
    }
    
    
    
    possibles = sqrt(GreatestCommon);
    if (possibles * possibles == GreatestCommon)
        possibles++;
    for(int i= 1; i< possibles+1; i++)
    {
        if (GreatestCommon % i == 0)
        {
            resp++;
            if (GreatestCommon / i != i)
                resp++;
        }
    }
    
    cout<< resp;
    
    return 0;
}
