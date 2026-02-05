#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--){
        int n ;
        cin >> n ;
        vector<int> v(n);

        int odd = 0 ;
        for(int i = 0 ; i<n ; i++){
            cin >> v[i];
            if(v[i] % 2) odd++ ;
        }

        if(odd % 2) cout << "NO\n" ;
        else cout << "YES\n" ;
    }
}
