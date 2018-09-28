//
//  main.cpp
//  Giga-Kilo-Gigabyte
//
//  Created by Pato Saldivar on 28/09/18.
//  Copyright © 2018 Pato Saldivar. All rights reserved.
//

#include <iostream>

using namespace std;
long long MOD=1000000007, dp[15];



long long fast_power(long long base, long long power) {
    long long result = 1;
    while(power > 0) {
        if(power&1) {
            result = (result*base)%MOD;
        }
        base = (base * base)%MOD;
        power = power >>=1;
    }
    return result;
}


long long Memo(long long n){
    long long ans=0;
    if (dp[n]==0) {
        dp[n]=Memo(n-1)*2;
    }
        ans=dp[n];
    return ans;
}

int main() {
dp[0]=1;
    long long T, N[15];
    cin >> T;
    for (int i=0; i<T; i++) {
        cin >> N[i];
        N[i]/=3;
        N[i]-=1;
        Memo(N[i]);
        cout<< dp[N[i]]<< endl;
    }
    
    
    
    return 0;
}
