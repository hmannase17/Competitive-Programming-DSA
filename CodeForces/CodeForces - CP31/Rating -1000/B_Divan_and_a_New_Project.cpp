#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<pair<int, int>> v(n);
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            v[i] = {x, i+1}; // indices are 1 to n
        }

        sort(v.rbegin(), v.rend());

        vector<int> ans(n+1);
        ll time = 0;
        int x = 0; 
        ans[0] = x; 

        int l = -1, r = 1; 

        for (auto& p : v){
            int ct = p.first;
            int idx = p.second;

            if (abs(l) <= abs(r)){
                ans[idx] = l;
                time += 2LL * ct * abs(l);
                l--;
            } 
            else {
                ans[idx] = r;
                time += 2LL * ct * abs(r);
                r++;
            }
        }

        cout << time << endl;
        for (int i = 0; i <=n; i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}