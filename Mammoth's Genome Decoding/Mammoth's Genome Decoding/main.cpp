//
//  main.cpp
//  Mammoth's Genome Decoding
//
//  Created by Pato Saldivar on 26/09/18.
//  Copyright © 2018 Pato Saldivar. All rights reserved.
//

#include <iostream>
using namespace std;
 int ArrChar[5];

int main() {
    string s;
   
    int n, cambios, cA, cC, cG, cT;
    cin>>n >> s;
    char Poner;
    for (int i=0; i<n; i++) {
        switch (s[i]) {
            case 'A':
                ArrChar[0]++;
                break;
            case 'C':
                ArrChar[1]++;
                break;
            case 'G':
                ArrChar[2]++;
                break;
            case 'T':
                ArrChar[3]++;
                break;
            case '?':
                ArrChar[4]++;
                break;
        }
    }
    cA= ArrChar[0];
    cC= ArrChar[1];
    cG= ArrChar[2];
    cT= ArrChar[3];
    cambios= ArrChar[4];
    
    if (ArrChar[0]>n/4 || ArrChar[1]>n/4 || ArrChar[2]>n/4 || ArrChar[3]>n/4  || n%4 !=0) {
        cout<<"===";
    }
    else{
    
        if(cambios!=0){
            for (int i=0; i<n; i++) {
                
            if (s[i]== '?' &&  cambios!=0) {
                if (cA<n/4 ) {
                    Poner= 'A';
                    cA++;
                }else if (cC<n/4 ) {
                    Poner= 'C';
                    cC++;
                }else if (cG<n/4 ) {
                    Poner= 'G';
                    cG++;
                }else if (cT<n/4 ) {
                    Poner= 'T';
                    cT++;
                }
                s[i]= Poner;
                cambios--;
                }
                
            }
        }
    cout<< s;
    }
    
    return 0;
}
