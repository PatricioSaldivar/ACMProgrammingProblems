//
//  main.cpp
//  Unsual Sum
//
//  Created by Pato Saldivar on 25/09/18.
//  Copyright © 2018 Pato Saldivar. All rights reserved.
//

#include <iostream>
using namespace std;

long long Mod = 10e9+7;
long long Gcd;
long long y;
int main() {
    cin>> Gcd>> y;
    if (y%Gcd==0) {
        cout<< y/Gcd;
    }else
        cout << 0;
    
    return 0;
}
