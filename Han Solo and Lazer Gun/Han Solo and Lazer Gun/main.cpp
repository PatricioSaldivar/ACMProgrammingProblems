//
//  main.cpp
//  Han Solo and Lazer Gun
//
//  Created by Pato Saldivar on 26/09/18.
//  Copyright © 2018 Pato Saldivar. All rights reserved.
//

#include <iostream>
#include <set>
using namespace std;
struct ST{
    int x=0;
    int y=0;
    bool Muerto=true;
    
    bool operator < (const ST& str) const
    {
        return (x < str.x);
    }
};


int main() {
    int n, Xcount=0, Ycount=0, ans;
    double X0, Y0;
    cin >> n >> X0 >> Y0;
    ST malos[1000005];
    set <double> slopes;
    
    for (int i=0; i<n; i++) {
        cin >> malos[i].x >> malos[i].y;
        malos[i].Muerto=false;
        if (X0 == malos[i].x) {
            Xcount=1;
            malos[i].Muerto= true;
        }
        if (Y0 == malos[i].y) {
            Ycount=1;
            malos[i].Muerto=true;
        }
    }
    for (int i=0; i<n; i++) {
        if (!malos[i].Muerto) {
            double slope= ((malos[i].y-Y0)/(malos[i].x-X0));
            slopes.insert(slope);
        }
    }
    ans= slopes.size() + Xcount + Ycount;
    cout << ans;
    
    
    return 0;
}
