#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t ;
    while(t--){
        int a,b ;
        cin >> a >> b;
        int kx ,ky ,qx,qy ;
        cin >> kx >> ky ;
        cin >> qx >> qy ;

        set<pair<int,int>> s ;
        s.insert({kx + a , ky + b});
        s.insert({kx + a , ky - b});
        s.insert({kx - a , ky + b});
        s.insert({kx - a , ky - b});
        s.insert({kx + b , ky + a});
        s.insert({kx + b , ky - a});
        s.insert({kx - b , ky + a});
        s.insert({kx - b , ky - a});

        set<pair<int,int>> tmp ;
        if(s.count({qx + a , qy + b})) tmp.insert({qx + a , qy + b}) ;
        if(s.count({qx + a , qy - b})) tmp.insert({qx + a , qy - b}) ;
        if(s.count({qx - a , qy + b})) tmp.insert({qx - a , qy + b}) ;
        if(s.count({qx - a , qy - b})) tmp.insert({qx - a , qy - b}) ;
        if(s.count({qx + b , qy + a})) tmp.insert({qx + b , qy + a}) ;
        if(s.count({qx + b , qy - a})) tmp.insert({qx + b , qy - a}) ;
        if(s.count({qx - b , qy + a})) tmp.insert({qx - b , qy + a}) ;
        if(s.count({qx - b , qy - a})) tmp.insert({qx - b , qy - a}) ;

        cout << tmp.size() << endl;
    }
    return 0;
}
