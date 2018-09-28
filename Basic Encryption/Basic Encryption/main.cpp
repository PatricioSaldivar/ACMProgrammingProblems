//
//  main.cpp
//  Basic Encryption
//
//  Created by Pato Saldivar on 28/09/18.
//  Copyright © 2018 Pato Saldivar. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

int main() {
    int lineas, key, num;
    string s, ans;
    char letra;
    cin >> lineas>>key;
    cin.ignore();
    for (int i=0; i<=lineas; i++) {
        getline(cin,s);
        ans.erase();
        for (int j=0; j<s.length(); j++) {
            letra=s[j];
            if (letra>= 97 && letra<=122) {
                num= letra-'a'+1;
                num-=key;
                if (num<0) {
                    num= abs(num);
                    num= num%26;
                    num= 26-num;
                }else{
              
                num= num%26;
            }
                letra= num + 'a' -1;
            }
            if (letra>= 65 && letra<=90) {
               num= letra-'A'+1;
                num-=key;
                if (num<0) {
                    num= abs(num);
                    num= num%26;
                    num= 26-num;
                }else{
                num= num%26;
                }
                letra= num + 'A' -1;
            }
           
            ans+=letra;
        }
        cout<< ans << endl;;
    }
    
    return 0;
}
