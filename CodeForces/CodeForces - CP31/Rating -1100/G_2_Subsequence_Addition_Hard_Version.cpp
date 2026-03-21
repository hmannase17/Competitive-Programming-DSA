#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


void solve() {
	ll n;
	cin >> n; 
	vector<ll> v(n);
	
	for (int i = 0; i<n; i++) cin >> v[i];	
	sort(v.begin(), v.end()); 
	
	if (v[0] != 1) {
		cout << "NO" << endl;
		return;
	}
	
	ll sum = 1; 
	
	for (int i = 1; i<n; i++) { 
		if (v[i] > sum) {
			cout << "NO" << endl;
			return;
		}
		sum += v[i]; 
	}
	cout << "YES" << endl;
}

int main() {
	int t;
	cin >> t; 
	while (t--) solve(); 
}
