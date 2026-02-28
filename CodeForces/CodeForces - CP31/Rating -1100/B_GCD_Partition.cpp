#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
	ll n;
	cin >> n; 
	vector<ll> v(n); 
	for (int i = 0; i<n; i++) cin >> v[i];
    ll ans = 0;
    
    // try to keep k = 2 , make prefix and check for two parts mith max GCD
	for (int i = 1; i<n; i++) v[i] += v[i-1];

    for(int i = 1 ; i<n ; i++){
        ll left = v[i-1];
        ll right = v.back() - v[i-1];
        ans = max(ans , gcd(left , right));
    }

    cout << ans << endl; 
}

int main() {
	int t;
	cin >> t; 
	while (t--) solve();
}
