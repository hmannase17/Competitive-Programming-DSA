#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool inline divisible(int x ,int y){
    return (x/y > 0) &&  x%y == 0 ;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a,b,c;
        cin >> a>>b>>c ;
        bool can = false;

        int d1 = b-a ;
        int d2 = c-b ;

        if(d1 == d2){
            cout << "YES\n";
            continue;
        }

        if(divisible(c+a , 2*b) || divisible(2*b - c , a) || divisible(2*b - a , c)){
            can = true ;
        }

        if(can) cout << "YES\n";
        else cout << "NO\n" ;
    }
    return 0;
}