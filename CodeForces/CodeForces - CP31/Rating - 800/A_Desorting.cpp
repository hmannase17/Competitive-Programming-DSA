#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--){
        int n ;
        cin >> n ;
        vector<int> v(n);

        bool sorted = true;
        for(int i = 0 ; i<n ; i++){
            cin >> v[i];
            if(i > 0 && v[i] < v[i-1]) sorted = false ;
        }

        if(!sorted){
            cout << 0 << endl ;
            continue;
        }
        
        int d = INT_MAX ;
        for(int i = 1 ; i<n ; i++) d = min(d , v[i]-v[i-1]);
        cout << 1+(d/2) << endl ;
    }
}
