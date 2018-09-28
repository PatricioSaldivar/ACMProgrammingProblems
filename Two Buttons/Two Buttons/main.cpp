//
//  main.cpp
//  Two Buttons
//
//  Created by Pato Saldivar on 27/09/18.
//  Copyright © 2018 Pato Saldivar. All rights reserved.
//

#include <iostream>
using namespace std;
int main() {
    int n, m;
    int redB=0, blueB=0;
    int ans=0;
    
    cin>>n >>m;
    
    while (n<m) {
        if (m%2==1) {
            m++;
            blueB++;
        }else{
            m/=2;
            redB++;
        }
        
    }
    if (n!=m) {
        ans= n-m;
    }
    
    ans+= redB+blueB;
    cout<<ans;
    return 0;
}
