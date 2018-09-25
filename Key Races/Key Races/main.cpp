//
//  main.cpp
//  Key Races
//
//  Created by Pato Saldivar on 24/09/18.
//  Copyright © 2018 Pato Saldivar. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    int s, v1, v2 , t1 , t2, tiempo1, tiempo2;
    cin>> s >> v1>> v2 >> t1 >> t2;
    
    tiempo1= s*v1 + 2*t1;
    tiempo2= s*v2 + 2*t2;
    if (tiempo1< tiempo2) {
        cout << "First";
    }
    if (tiempo1> tiempo2) {
        cout << "Second";
    }
    if (tiempo1== tiempo2) {
        cout << "Friendship";
    }
    
    return 0;
}
