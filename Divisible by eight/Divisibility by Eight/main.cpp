//
//  main.cpp
//  Divisible by eight
//
//  Created by Pato Saldivar on 25/09/18.
//  Copyright © 2018 Pato Saldivar. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;
int ArrDigits[10];

int main() {
    string BigNumber, aux, num;
    int resp;
    cin>> BigNumber, aux;
      aux= BigNumber;
    
    
    for (int i=0; i<BigNumber.length(); i++) {
        int Digit= stoi(BigNumber.substr(i,1));
        if (ArrDigits[Digit]==0) {
        ArrDigits[Digit]=i+1;
            }
        }
  
   
    if (ArrDigits[8]>=1) {
        cout<<"Yes"<<endl;
        cout<<8;
        return 0;
    }
    if (ArrDigits[0]>=1) {
        cout<<"Yes"<<endl;
        cout<<0;
        return 0;
    }
    if (ArrDigits[6]>=1) {
        if(ArrDigits[4]>=1 && ArrDigits[4]>ArrDigits[6]){
            cout<<"Yes"<<endl;
            cout<<64;
            return 0;
        }
    }
    if (ArrDigits[3]>=1) {
        if (ArrDigits[2]>=1 && ArrDigits[2]>ArrDigits[3]) {
            cout<<"Yes"<<endl;
            cout<<32;
            return 0;
        }
    }
    if (ArrDigits[2]>=1) {
        if (ArrDigits[4]>=1 && ArrDigits[4]>ArrDigits[2]) {
            cout<<"Yes"<<endl;
            cout<<24;
            return 0;
        }
    }
    if (ArrDigits[1]>=1) {
        if (ArrDigits[6]>=1 && ArrDigits[6]>ArrDigits[1]) {
            cout<<"Yes"<<endl;
            cout<<16;
            return 0;
        }
    }
    if (ArrDigits[5]>=1) {
        if (ArrDigits[6]>=1 && ArrDigits[6]>ArrDigits[5]) {
            cout<<"Yes"<<endl;
            cout<<56;
            return 0;
        }
    }
        if (ArrDigits[7]>=1) {
            if (ArrDigits[2]>=1 && ArrDigits[2]>ArrDigits[7]) {
                cout<<"Yes"<<endl;
                cout<<72;
                return 0;
            }
        }
            if (ArrDigits[9]>=1) {
                if (ArrDigits[6]>=1 && ArrDigits[6]>ArrDigits[9]) {
                    cout<<"Yes"<<endl;
                    cout<<96;
                    return 0;
                }
        }
    
    if (BigNumber.length()>3) {
         for(int j =0; j < BigNumber.length(); j++){
        for (int i=0;i<aux.length(); i++) {
            
            resp= stoi(aux.substr(i,3));
            if (resp%8 == 0) {
                cout<<"Yes"<<endl;
                cout<<resp;
                return 0;
            }
                resp = stoi(aux.substr(aux.length()-3,3));
            if (resp%8 == 0) {
                cout<<"Yes"<<endl;
                cout<<resp;
                return 0;
            }
            
            aux=BigNumber;
            aux.erase(i,1);
        }
    }
}
    if (BigNumber.length()==3) {
        resp= stoi(BigNumber.substr(0,3));
        if (resp%8 == 0) {
            cout<<"Yes"<<endl;
            cout<<resp;
            return 0;
        }
    }
cout<< "NO";

return 0;
}

