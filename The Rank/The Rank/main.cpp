//
//  main.cpp
//  The Rank
//
//  Created by Pato Saldivar on 10/09/18.
//  Copyright © 2018 Pato Saldivar. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    int NumeroEstudiantes, Test1, Test2,Test3, Test4, pos, Suma,Suma2;;
    cin>>NumeroEstudiantes;
    cin>>Test1>>Test2>>Test3>>Test4;
    Suma= Test1+Test2+Test3+Test4;
    pos=1;
    
    for (int i=1; i<NumeroEstudiantes; i++) {
        cin>>Test1>>Test2>>Test3>>Test4;
        Suma2=Test1+Test2+Test3+Test4;
        if (Suma<Suma2) {
            pos++;
        }
    }
    cout<<pos<<endl;
}
