#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    int n;
    cin >> n;

    ll ans = 0;
    vector<ll> a(n);
    for(int i = 0 ; i<n ; i++) cin >> a[i];

    for (int i = 0; i<n; i++) {
		// Calculate the gcd of the current answer and the absolute difference
		// between the i-th element and its corresponding element from the end
		ans = gcd(ans, abs(a[i] - a[n-i-1]));
	}

    cout << ans << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) solve();
}