//
//  main.cpp
//  Vanya and Triangles
//
//  Created by Pato Saldivar on 26/09/18.
//  Copyright © 2018 Pato Saldivar. All rights reserved.
//

#include <iostream>
#include <set>
using namespace std;
struct points{
    int x;
    int y;
    
};
int main() {
    int n;
    points Puntos[20001], AB, AC;
    int counter=0;
    double area;
    
        cin>>n;
    if (n<3) {
        cout << 0;
        return 0;
    }
    for(int i=0;i<n;i++){
            cin>>Puntos[i].x>>Puntos[i].y;
    }
        for(int i=0;i<n;i++){ //x1
            for(int j=i+1;j<n;j++){ //x2
                for(int k=j+1;k<n;k++){ //x3
                    //Sacar areas de cada combinacion
                    AB.x=(Puntos[j].x-Puntos[i].x);
                    AB.y=(Puntos[j].y-Puntos[i].y);
                    AC.x=(Puntos[k].x-Puntos[i].x);
                    AC.y=(Puntos[k].y-Puntos[i].y);
                    area=(AB.x*AC.y)-(AC.x*AB.y);
                    if(area!=0){
                        counter++;
                        
                    }
                }
            }
        }
        cout<<counter<<endl;
    
    return 0;
}
