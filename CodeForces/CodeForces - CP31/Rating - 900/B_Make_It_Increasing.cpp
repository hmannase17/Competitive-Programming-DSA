#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int ans = 0 ;
        bool neg = false ;
        vector<long long> v(n);
        for(int i = 0 ; i<n ; i++) cin >> v[i];

        for(int i = n-2 ; i>=0 ; i--){
            while(v[i] >= v[i+1]){
                if(v[i] == 0){   // check first
                    neg = true ;
                    break ;
                }
                v[i] = v[i]/2 ;
                ans ++ ;
            }
            if(neg) break ;
        }

        if(neg){
            cout << -1 << endl ;
            continue;
        }

        cout << ans << "\n";
    }

    return 0;
}