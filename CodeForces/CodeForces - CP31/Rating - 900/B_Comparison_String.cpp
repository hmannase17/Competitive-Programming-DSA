#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        int ans = 1 , curr = 1;
        for (int i = 1; i<n; i++) {
            if (s[i] == s[i-1]) curr++;
            else curr = 1;
            ans = max(ans, curr);
        }

        // longest contiguous <<<<< or >>>> + 1

        cout << ans+1 << "\n";
    }

    return 0;
}