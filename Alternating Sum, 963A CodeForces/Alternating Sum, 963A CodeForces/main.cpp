//
//  main.cpp
//  Alternating Sum, 963A CodeForces
//
//  Created by Pato Saldivar on 24/09/18.
//  Copyright © 2018 Pato Saldivar. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;
const long long mod=1e9+9;

long long QP(long long x, long long n){
    long long sum=1;
    while(n>0){
    if(n&1){
        sum=(sum*x)%mod;
    }
        x=(x*x)%mod;
        n/=2;
    }
    return sum;
}


int main() {
    long long n, a, b, k, sum=0;
    char kString[100000];
    
    cin>> n >> a >> b >> k;
    for (int i=0; i<k; i++) {
        cin>> kString[i];
        switch (kString[i]) {
            case '+':
                sum+= ((QP(a, n-i)*QP(b, i))%mod + mod)%mod;
                break;
            case '-':
                sum-= ((QP(a, n-i)*QP(b, i))%mod + mod)%mod;
                break;
        }
        
    }
    long long after=(QP(QP(a,k),mod-2)%mod *QP(b,k)%mod)%mod;
   
    if (after>1){
        after=(((QP(after,(n+1)/k)%mod-after%mod)%mod)*QP(after-1,mod-2)%mod);
    
    }else after=(n+1-k)/k;
    sum=(((sum*(after+1)%mod)+mod)%mod);

    
    cout << sum;
    
    return 0;
}










