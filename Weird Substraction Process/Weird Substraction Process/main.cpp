//
//  main.cpp
//  Weird Substraction Process
//
//  Created by Pato Saldivar on 24/09/18.
//  Copyright © 2018 Pato Saldivar. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    long long a,b;
    cin>>a >>b;
    while (a!=0 && b!=0) {
        if(a>= b*2){
            a%=2*b;
        }else if (b>= a*2){
            b%=2*a;
        }else{
            cout << a <<" "<< b;
            return 0;
        }
    }
    cout << a <<" "<< b;
    return 0;
    
}

