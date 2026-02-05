#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n ;
        vector<int> a(n), b(n);

        for(int i = 0; i<n; i++) cin >> a[i];
        for(int i = 0; i<n; i++) cin >> b[i];
        
        sort(a.begin(), a.end());

        long long ans = 0;
        vector<long long> preB(n);
        
        preB[0] = 1LL*b[0];
        for(int i = 1 ; i<n ; i++) preB[i] = preB[i-1] + b[i] ; 
        
        for(int i = 0 ; i<n ; i++){
            long long usable = n-i;

            int l = 0, r = n-1, best = -1;
            while(l <= r){
                int m = (l + r) / 2;
                if(preB[m] <= usable){
                    best = m;
                    l = m + 1;
                } 
                else r = m-1;
            }

            if(best != -1){
                ans = max(ans, 1LL*a[i]* (best + 1));
            }
        }
        cout << ans << endl ;
    }
    return 0;
}