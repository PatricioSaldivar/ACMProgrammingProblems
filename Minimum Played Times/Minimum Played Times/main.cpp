//
//  main.cpp
//  Minimum Played Times
//
//  Created by Pato Saldivar on 28/09/18.
//  Copyright © 2018 Pato Saldivar. All rights reserved.
//

#include <iostream>
#include <string>
#include <cmath>
using namespace std;





int main() {
    int n;
    long long ans[100005], cantDeCeros, num, denom;;
    string s;
    cin>>n;
    for (int i=0; i<n; i++) {
        cin >> s;
        cantDeCeros= s.length()- s.find('.')-1;
        denom= pow(10, cantDeCeros);
        num= stod(s.substr(s.find('.')+1));
        if (num!=0 && num!=1 ) {
            
        if (denom%num==0) {
            ans[i]= denom/num;
        }else{
            for (long long j = denom; j>=2; j--){
                if (num % j == 0 && denom % j == 0)
                {
                    num = num/j;
                    denom = denom/j;
                }
            }
            ans[i]=denom;
        }
        
    }
        else
            (num==0? ans[i]=0: ans[i]=1);
            }
    for (int i=0; i<n; i++) {
        cout << ans[i]<<endl;
    }
    
    
    return 0;
}

