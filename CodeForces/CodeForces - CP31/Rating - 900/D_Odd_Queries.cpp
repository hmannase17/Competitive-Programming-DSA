#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,q;
        cin >> n>>q;

        long long sum = 0 ;
        vector<long long> a(n);
        for(int i = 0 ; i<n ; i++) {
            cin >> a[i];
            sum += a[i];
        }

        // Prefix
        for(int i = 1 ; i<n ; i++)  a[i] += a[i-1];

        while(q--){
            int l , r, k ;
            cin >> l >> r >> k ;

            long long extra = k*(r-l+1) ;
            
            int left = (l-1>0) ? a[l-2] : 0 ;   // 1 indexed
            int right = a[r-1] ;

            long long total = sum - right + left + extra ;

            if(total % 2) cout << "YES\n";
            else cout << "NO\n" ;
        }
    }
    return 0;
}