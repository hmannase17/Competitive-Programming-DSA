#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i<n; i++) cin >> a[i];

        vector<int> freq(n+1, 0);
        for (int x : a) freq[x]++;
        vector<int> ans(n+1, -1);

        for (int i = 1; i<=n; i++) {
            if (freq[i] > 0) ans[i] = 1;
        }

        for (int i = 2; i<=n; i++) {
            for (int j = 1; j*j<=i; j++){
                if (i %j == 0) {
                    int d1 = j;
                    int d2 = i / j;

                    if (ans[d1] != -1 && ans[d2] != -1) {
                        int curr = ans[d1]+ans[d2];
                        if (ans[i] == -1) ans[i] = curr;
                        else ans[i] = min(ans[i], curr);
                    }
                }
            }
        }
        for (int i = 1; i<=n; i++) cout << ans[i] << " ";
        cout << endl;
    }
    return 0;
}
