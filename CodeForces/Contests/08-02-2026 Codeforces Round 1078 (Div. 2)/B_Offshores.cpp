#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        long long n, x,y;
        cin >> n >> x >> y;
        long long total=0 , ans = 0 ;
        vector<long long> v(n) , tmp(n);
        for(int i = 0 ; i<n ; i++){
            cin >> v[i];
            tmp[i] = (v[i]/x)*y;
            total += tmp[i];
        }

        for(int i =0 ; i<n ; i++){
            long long curr = total - tmp[i];
            ans = max(ans , v[i] + curr);
        }
        cout << ans << endl ;
    }
    return 0;
}
