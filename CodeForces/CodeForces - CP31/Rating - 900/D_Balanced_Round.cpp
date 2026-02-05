#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        long long k;
        cin >> n >> k;
        vector<long long> a(n);
        for (int i = 0; i<n; i++) cin >> a[i];
        sort(a.begin(), a.end());
        int maxLen = 1 , curr = 1;

        for (int i = 1; i<n; i++) {
            if (a[i]-a[i-1] <= k) curr++;
            else  curr = 1;
            maxLen = max(maxLen, curr);
        }
        cout << n-maxLen << '\n';
    }
    return 0;
}
