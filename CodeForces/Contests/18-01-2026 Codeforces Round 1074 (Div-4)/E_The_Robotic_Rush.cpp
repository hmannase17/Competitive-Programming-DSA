    #include <bits/stdc++.h>
    using namespace std;

    long long binary(vector<long long>& b, long long target, bool left) {
        long long ans = -1;
        int l = 0, r = b.size() - 1;
        while (l <= r) {
            int m = l + (r - l) / 2;
            if (left) {
                if (b[m] < target) {
                    ans = b[m];
                    l = m + 1;
                } else r = m - 1;
            } else {
                if (b[m] > target) {
                    ans = b[m];
                    r = m - 1;
                } else l = m + 1;
            }
        }
        return ans;
    }

    int main() {
        ios::sync_with_stdio(false);
        cin.tie(NULL);
        int t;
        cin >> t;
        while (t--) {
            long long n, m, k;
            cin >> n >> m >> k;
            vector<long long> a(n);
            for (int i = 0; i < n; i++) cin >> a[i];
            vector<long long> b(m);
            for (int i = 0; i < m; i++) cin >> b[i];
            
            sort(b.begin(), b.end());
            
            string s;
            cin >> s;

            multiset<pair<long long, int>> left, right;
            vector<bool> dead(n, false);

            for (int i = 0; i<n; i++) {
                long long l = binary(b, a[i], true);
                long long r = binary(b, a[i], false);
                if (l != -1) left.insert({a[i] - l, i});
                if (r != -1) right.insert({r - a[i], i});
            }

            int ct = 0 ,mxL = 0 , mxR = 0;
            int alive = n;

            for (char& c : s) {
                if (c == 'L') ct--;
                else ct++;

                if (ct <0 && -ct > mxL){
                    mxL = -ct;
                    while (!left.empty() && left.begin()->first <= mxL){
                        int id = left.begin()->second;
                        if (!dead[id]){
                            dead[id] = true;
                            alive--;
                        }
                        left.erase(left.begin());
                    }
                } 
                else if (ct > 0 && ct > mxR){
                    mxR = ct;
                    while (!right.empty() && right.begin()->first <= mxR) {
                        int id = right.begin()->second;
                        if (!dead[id]) {
                            dead[id] = true;
                            alive--;
                        }
                        right.erase(right.begin());
                    }
                }
                cout << alive << " ";
            }
            cout << endl;
        }
        return 0;
    }