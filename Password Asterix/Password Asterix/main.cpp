//
//  main.cpp
//  Password Asterix
//
//  Created by Pato Saldivar on 26/09/18.
//  Copyright © 2018 Pato Saldivar. All rights reserved.
//


#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    string t;
    string Prefix, Oblix, Sufix;
    long long tamS, tamPreSuf;
    
    cin>>s;
    tamS= s.length();
    for (long long i=0; i<tamS-2; i++) {
        Prefix= s.substr(0,i+1);
        Sufix= s.substr(tamS-1-i);
        if (Prefix==Sufix) {
            t= s.substr(tamS-1-i);
            if (s.substr(i+1,t.length())==t && t.length()*3 == tamS) {
                cout<<t;
                return 0;
            }

        }
    }
    tamPreSuf= t.length();
    if (tamPreSuf>0) {
    for (long long i=1; i<tamS-tamPreSuf; i++) {
        Oblix= s.substr(i,tamPreSuf);
        if (Oblix==t) {
            cout << t;
            return 0;
        }
    }
    for (long long i=1; i<tamPreSuf+1; i++) {
        Oblix= s.substr(1,i);
        if (Oblix==t) {
            cout << t;
            return 0;
            }
        }
  
    for (long long i=0; i<tamS-tamPreSuf; i++) {
        if (Oblix.length()!=0) {
            
        if (Oblix[0]!=t[0]) {
            Oblix.erase(0,1);
            }
            if (Oblix.length()!=0) {
        if (Oblix[Oblix.length()-1]!=t[tamPreSuf-1]) {
            Oblix.erase(Oblix.length()-1,1);
            }
                
                    
                
        if (Oblix == t.substr(0,Oblix.length())) {
            cout<<Oblix;
            return 0;
                    }
                }
            }
        
        }
    }
    cout << "Just a legend";

    return 0;
}


