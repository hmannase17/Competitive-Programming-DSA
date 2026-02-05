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

        int ct1 = 0;
        for (int i = 0; i<n-3; ){
            if (s.substr(i, 4) == "2025") {
                ct1++;
                i += 4; 
            } 
            else  i++;
        }
        int ans = ct1;

        string str = "2026";
        for (int i = 0; i<n-3; i++) {
            int ct2 = 0;
            for (int j = 0; j<4; j++){
                if (s[i+j] != str[j]) ct2++;
            }
            ans = min(ans, ct2);
        }
        cout << ans << "\n";
    }
    return 0;
}
