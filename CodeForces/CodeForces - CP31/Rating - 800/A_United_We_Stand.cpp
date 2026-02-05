#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--){
        int n ;
        cin >> n ;
        vector<int> v(n) , b  , c;

        for(int i = 0 ; i<n ; i++) cin >> v[i];
        sort(v.begin() , v.end());

        int idx = -1;
        for(int i = 1 ; i<n ; i++){
            if(v[i] > v[i-1]){
                idx = i ;
                break;
            }
        }

        if(idx == -1){
            cout << -1 << endl ;
            continue;
        }

        b = {v.begin() , v.begin()+idx} ;
        c = {v.begin()+idx , v.end()} ;

        cout << b.size() << " " << c.size() << endl ;
        for(int& x : b) cout << x << " " ;
        cout << endl;
        for(int& x : c) cout << x << " " ;
        cout << endl;
    }
}
