#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;

        long long sumAbs = 0;
        int neg = 0;
        int minAbs = INT_MAX;

        for (int i = 0; i<n; i++) {
            for (int j = 0; j<m; j++){
                int x;
                cin >> x;

                if (x<0) neg++;
                sumAbs += abs(x);
                minAbs = min(minAbs, abs(x));
            }
        }

        if (neg % 2 == 0) cout << sumAbs << "\n";
        else cout << sumAbs - 2LL * minAbs << "\n";
    }

    return 0;
}
