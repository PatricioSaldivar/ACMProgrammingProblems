//
//  main.cpp
//  Unimodal Array
//
//  Created by Pato Saldivar on 24/09/18.
//  Copyright © 2018 Pato Saldivar. All rights reserved.
//

#include <iostream>
using namespace std;
int main() {
    int array[100], n, last=0, verificador=1;

    
    cin >> n;
    for (int i =0;i<n; i++) {
        cin>> array[i];
    }
    for (int i=0; i<n; i++) {
       
        if (verificador==1) {
            if (array[i]<last) {
                verificador=3;
            }else if (array[i]==last){
                verificador=2;
            }
        }else if (verificador==2){
            if(array[i] > last){
                cout<<"No";
            return 0;
            }else if(array[i] < last){
                verificador = 3;
            }
        }else if (verificador==3){
            if (array[i]>= last) {
                cout<<"No";
                return 0;
            }
        }
    
        last =array[i];
}
    
    cout << "Yes";
    return 0;
}


