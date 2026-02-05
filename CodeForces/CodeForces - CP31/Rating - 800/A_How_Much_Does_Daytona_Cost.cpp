#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n , k;
        cin >> n >> k ;
        vector<int> v(n) ;
        bool found = false ;
        for(int i = 0 ; i<n ; i++){
            cin >> v[i];
            if(v[i] == k) found = true;
        }

        if(found) cout << "YES\n";
        else cout << "NO\n";
    }
}
