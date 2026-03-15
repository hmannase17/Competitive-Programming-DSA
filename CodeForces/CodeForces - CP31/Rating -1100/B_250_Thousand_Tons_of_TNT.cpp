#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
	int n;
	cin >> n; 
	vector<ll> v(n); 
	for(int i = 0 ; i<n ; i++) cin >> v[i]; 

	vector<ll> pre(n); 
	pre[0] = v[0]; 
	for (ll i = 1; i < n; i++) pre[i] = v[i] + pre[i-1];

	ll ans = 0; 
	for (ll k = 1; k <= n; k++) {
		if (n % k) continue; 

		ll res = 0;
		ll start = k-1; 
		ll mx = pre[start]; 
		ll mn = pre[start]; 

		for (ll idx = start+k; idx<n; idx += k){ 
			ll curr = pre[idx] - pre[idx-k]; 
			mx = max(mx, curr);
			mn = min(mn, curr); 
		}
		ans = max(ans, mx - mn); 
	}
	cout << ans << endl; 
}

int main() {
	int t ;
	cin >> t; 
	while (t--) solve(); 
}
