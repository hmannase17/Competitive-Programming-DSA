#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        int n, q;
        cin >> n >> q;
        vector<int> a(n), b(n);

        for(int i = 0; i<n; i++) cin >> a[i];
        for(int i = 0; i<n; i++) cin >> b[i];
        
        vector<long long> maxVal(n);
        for(int i = 0; i<n; i++)  maxVal[i] = max(a[i], b[i]);
        for (int i = n-2; i>=0; i--) maxVal[i] = max(maxVal[i], maxVal[i+1]);
        
        vector<long long> sufSum(n);
        sufSum[n-1] = maxVal[n-1];
        for (int i = n-2; i >= 0; i--) sufSum[i] = sufSum[i+1] + maxVal[i];

        while (q--) {
            int l, r;
            cin >> l >> r;
            l--; 
            r--; 

            long long ans;
            if (r<n-1) ans = sufSum[l]-sufSum[r+1];
            else ans = sufSum[l];
            cout << ans << " ";
        }
        cout << endl;
    }
    return 0;
}