#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
	ll n;
	cin >> n;
	ll l, r;
	cin >> l >> r;
	vector<ll> ans; 

	for (int i = 1; i <= n; i++) {
		// Calculate the smallest multiple of i that is >= l
		ll tmp = ((l + i - 1) / i) * i;  // ceil of l/i * i
		ans.push_back(tmp); 

		if (tmp > r) {
			cout << "NO" << endl;
			return;
		}
	}

	cout << "YES" << endl;
	for (auto& x : ans) cout << x << " ";
	cout << endl;
}

int main(){
	int t;
	cin >> t;
	while (t--) solve();
}
