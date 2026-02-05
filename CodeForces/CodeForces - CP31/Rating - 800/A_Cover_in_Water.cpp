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

        int totalDots = 0, maxLen = 0;

        for (int i = 0; i<n; ) {
            if (s[i] == '#'){
                i++;
                continue;
            }
            int len = 0;
            while (i<n && s[i] == '.') {
                len++;
                totalDots++;
                i++;
            }
            maxLen = max(maxLen, len);
        }
        if (maxLen <= 2) cout << totalDots << "\n";
        else cout << 2 << "\n";
    }
}
