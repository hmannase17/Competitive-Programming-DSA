#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--){
        long long a , b , c ;
        cin >> a >> b >> c ;
        bool one = false;

        // 1 means first
        int move = 1 + (c%2) ;  // if even toh ab first ki baari firse, thus added 1

        if(move == 1){
            if(a-1 >= b) one = true;
        }
        else {
            if(b-1 < a) one = true; 
        }

        if(one) cout << "First\n";
        else cout << "Second\n";
    }
}
