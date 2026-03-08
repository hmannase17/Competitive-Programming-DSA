#include <bits/stdc++.h>
using namespace std;

// Precompute coprime pairs for numbers from 1 to 1000
vector<int> pairs[1001];

void solve() {
	int n;
	cin >> n;

	unordered_map<int , int> idx;

	for (int i = 1; i <= n; i++) {
		int x;
		cin >> x;
		idx[x] = i;  // last index
	}

	int ans = -1; 

	// Iterate over all numbers from 1 to 1000
	for (int i = 1; i <= 1000; ++i) { // O(1000*1000)
		if (!idx.count(i)) continue; 
		
		for (int& j : pairs[i]) {
			if (idx.count(j)) ans = max(ans, idx[i] + idx[j]);
		}
	}

	cout << ans << endl;
}

int main() {
	for (int i = 1; i <= 1000; ++i) {
		for (int j = 1; j <= 1000; ++j) {
			if (gcd(i, j) == 1) pairs[i].push_back(j); 
		}
	} 

	int t;
	cin >> t; 
	while (t--) solve();
}
