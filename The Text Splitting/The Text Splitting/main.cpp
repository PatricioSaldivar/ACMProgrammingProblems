//
//  main.cpp
//  The Text Splitting
//
//  Created by Pato Saldivar on 26/09/18.
//  Copyright © 2018 Pato Saldivar. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    bool ok=false;
    int n, p ,q;
    int i=0;
    string s;
    cin>> n >> p >> q;
    cin >> s;
    if (n == p || q == n) {
        cout << 1<<endl;
        cout<< s<<endl;
        ok=true;
    }
    else if ((p>q)) {
        if (0==(n%p)%q) {
            cout << (n/p)+((n%p)/q)<<endl;
            ok=true;
            for (int j=0; j<(n/p); j++) {
                cout << s.substr(i,p)<<endl;
                i+=p;
            }
            for (int j= i; j<n; j+=q) {
                cout << s.substr(j,q)<<endl;
            }
        }
        else
            for (int j=0; j<n/p;j++) {
            if (((n%p)+(p*j))%q ==0 && !ok){
            cout << (n/p)-j+(((n%p)+(p*j))/q)<<endl;
            ok=true;
            for (int k=0; k<(n/p)-j; k++) {
                cout << s.substr(i,p)<<endl;
                i+=p;
            }
            for (int k= i; k<n; k+=q) {
                cout << s.substr(k,q)<<endl;
                    }
                }
            }
        
    }    else if ((q>p)) {
        if (0==(n%q)%p) {
            cout << (n/q)+((n%q)/p)<<endl;
            ok=true;
            for (int j=0; j<(n/q); j++) {
                cout << s.substr(i,q)<<endl;
                i+=q;
            }
            for (int j= i; j<n; j+=p) {
                cout << s.substr(j,p)<<endl;
            }
        }
        else
            for (int j=0; j<n/q;j++) {
                if (((n%q)+(q*j))%p ==0 && !ok){
                    cout << (n/q)-j+(((n%q)+(q*j))/p)<<endl;
                    ok=true;
                    for (int k=0; k<(n/q)-j; k++) {
                        cout << s.substr(i,q)<<endl;
                        i+=q;
                    }
                    for (int k= i; k<n; k+=p) {
                        cout << s.substr(k,p)<<endl;
                    }
                }
            }
    }
        
    if (n%p==0 && !ok) {
        cout << n/p<<endl;
         ok=true;
        for (int i=0; i<n; i+=p) {
            cout << s.substr(i,p)<<endl;
        }
        
    }
    if (n%q==0 && !ok) {
        cout << n/q<<endl;
        ok=true;
        for (int i=0; i<n; i+=q) {
            cout << s.substr(i,q)<<endl;
        }
    }
    if (!ok) {
      cout<< -1;
    }
    
    
    return 0;
}
