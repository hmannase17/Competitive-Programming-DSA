#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n;
	cin >> n;
	vector<int> weight(n);
	for (int i = 0; i<n; i++) cin >> weight[i];
	
	vector<int> suffix(n);
	map<int, int> index;
	int sum = 0;
	
	for (int i = n-1; i >= 0; i--) {
		sum += weight[i];
		index[sum] = i;
		suffix[i] = sum;
	}

	int ans = 0;
	int prefix = 0;
	
	for (int i = 0; i<n; i++) {
		index.erase(suffix[i]);
		prefix += weight[i];

		if (index.find(prefix) != index.end()) {
			ans = max(ans, (i + 1) + (n-index[prefix]));
		}
	}
	cout << ans << endl;
}

int main(){
	int t;
	cin >> t;
	while (t--) solve();	
}
