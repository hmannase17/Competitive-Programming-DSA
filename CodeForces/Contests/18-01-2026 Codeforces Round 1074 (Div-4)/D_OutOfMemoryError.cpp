#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) {
        long long n, m, h;
        cin >> n >> m >> h;
        
        vector<long long> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        
        vector<int> b(m);
        vector<long long> c(m);
        for(int i = 0; i < m; i++) {
            cin >> b[i] >> c[i];
            b[i]--; //
        }

        vector<long long> curr(n, 0);
        vector<int> modified;
        vector<bool> rev(n, false);

        for(int i = 0; i < m; i++) {
            int idx = b[i];
            if (a[idx] + curr[idx] + c[i] > h) {
                for(int m_idx : modified) {
                    curr[m_idx] = 0;
                    rev[m_idx] = false;
                }
                modified.clear();
            } 
            else {
                curr[idx] += c[i];
                if(!rev[idx]) {
                    rev[idx] = true ;
                    modified.push_back(idx);
                }
            }
        }

        for(int i = 0; i < n; i++) {
            cout << a[i] + curr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}