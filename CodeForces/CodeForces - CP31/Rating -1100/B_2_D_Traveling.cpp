#include <bits/stdc++.h>
using namespace std;
#define ll long long


void solve() {
	int n, k, s, t;
	cin >> n >> k >> s >> t;
	vector<ll> x(n+1), y(n+1);

	for (int i = 1; i<=n; i++) cin >> x[i] >> y[i];

	ll ans = abs(x[s] - x[t]) + abs(y[s] - y[t]);	
	ll minS = 1e17, minT = 1e17;

	for (int i = 1; i<=k; i++) {
		minS = min(minS, abs(x[s] - x[i]) + abs(y[s] - y[i]));
		minT = min(minT, abs(x[t] - x[i]) + abs(y[t] - y[i]));
	}

	ans = min(ans, minS + minT);
	cout << ans << endl;
}

int main() {
	int t;
	cin >> t;
	while (t--) solve();
}
