#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t ;
    while(t--){
        int n , k ;
        cin >> n >> k;
        string s ;
        cin >> s ;

        unordered_map<char , int> m ;
        int odd = 0 ;
        bool flag= false;

        for(auto& c : s) m[c]++ ;

        for(auto& it : m){
            if(it.second % 2) odd++ ;
        }

        if(k%2 && ((n-k) % 2 == 0) && !odd) flag = true ;
        if(odd > k+1) flag = true ;

        if(flag) cout << "NO\n";
        else cout << "YES\n";
    }
    return 0;
}
