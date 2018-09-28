//
//  main.cpp
//  Kefa and Park
//
//  Created by Pato Saldivar on 27/09/18.
//  Copyright © 2018 Pato Saldivar. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;
struct Arbol{
    int pos=1;
    vector <int> connectado;
    bool Gato;
    bool SonRestas=true;
};
int n;
Arbol Arboles[15];

int DPS(int j, int hayGatos, int maxGatos){
    int resp=0;
    
    if (Arboles[j].SonRestas) {
        if(Arboles[j].Gato) hayGatos++;
        if (hayGatos<= maxGatos) resp++;;
    }
    
    else{
        if (Arboles[j].Gato) {
            hayGatos++;
        }else{
            hayGatos=0;
        }
        if (hayGatos<= maxGatos){
        for (int i=Arboles[j].connectado.size()-1; i>=0; i--) {
            int k= Arboles[j].connectado[i];
            resp+=DPS(k, hayGatos, maxGatos);
            }
        }
    }
    return resp;
}


int main() {
    int n,maxGatos, hayGato, ans=0;
    int conectado;
    
    cin>>n>>maxGatos;
    for (int i=0; i<n; i++) {
        cin>> hayGato;
        (hayGato==1 ? Arboles[i].Gato=true : Arboles[i].Gato=false);
    }
    for (int i=1; i<n; i++) {
        cin>> conectado>>Arboles[i].pos ;
        Arboles[conectado-1].connectado.push_back(i);
        Arboles[conectado-1].SonRestas=false;
    }
    hayGato=0;
    if (Arboles[0].Gato) {
        hayGato++;
    }
    for (int i=Arboles[0].connectado.size()-1; i>=0; i--) {
        int j=Arboles[0].connectado[i];
        ans+=DPS(j,hayGato,maxGatos);
        
    }
    
    cout << ans;
    
    return 0;
}
