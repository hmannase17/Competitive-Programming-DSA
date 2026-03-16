#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


void solve(){
	ll n, c; 
	cin >> n;
	cin >> c;
	vector<ll> cost; 

	for (int i = 1; i <= n; i++) { 
		ll x;
		cin >> x; 
		cost.push_back(i + x); 
	}

	sort(cost.begin(), cost.end());

	int i = 0, ans = 0; 

	while (i<n && cost[i] <= c){
		c -= cost[i]; 
		ans++; 
		i++; 
	}
	cout << ans << endl; 
}

int main() {
	int t; 
	cin >> t;
	while (t--) solve(); 
}
