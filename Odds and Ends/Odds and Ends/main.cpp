//
//  main.cpp
//  Odds and Ends
//
//  Created by Pato Saldivar on 24/09/18.
//  Copyright © 2018 Pato Saldivar. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    int n, arr[100], odds=0;
    cin>>n;
    for (int i=0; i<n; i++) {
        cin>> arr[i];
        if ((arr[i]%2) !=0) {
            odds++;
        }
    }
    if (n%2 == 0) {
        cout<< "No";
    }else if (((arr[0]  % 2) ==0) || ((arr[n-1] % 2) == 0)){
        cout << "No";

    }else if (n-odds< n/2) {
        cout<< "Yes";
    }else if(n==1 && odds==1){
        cout<< "Yes";
    }else
        cout <<"Yes";
    
    return 0;
}
