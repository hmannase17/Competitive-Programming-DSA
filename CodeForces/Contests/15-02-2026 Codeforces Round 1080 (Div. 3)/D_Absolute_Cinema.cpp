#include <iostream>
#include <vector>

using namespace std;

typedef long long ll;

void solve() {
    int n;
    cin >> n;
    vector<ll> f(n);
    for (int i = 0; i<n; i++) cin >> f[i];
    vector<ll> ans(n);

    if (n == 2) {
        ans[1] = f[0];
        ans[0] = f[1]; 
    } 
    else {
        ll sum = 0;
        for (int i = 1; i<n-1; i++) {
            ans[i] = (f[i+1]-2 * f[i]+f[i-1]) / 2;
            sum += ans[i]*i;
        }
        ll d1 = f[1]-f[0];
        ll dn_1 = f[n-1]-f[n-2];
        
        ans[n-1] = (f[0]-sum) / (n-1);
        ans[0] = ans[n-1]+(d1+dn_1) / 2;
    }
    for (int i = 0; i<n; i++) cout << ans[i] << " ";
    cout << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}