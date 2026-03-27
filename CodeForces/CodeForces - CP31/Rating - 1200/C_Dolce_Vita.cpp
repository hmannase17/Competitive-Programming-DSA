#include <bits/stdc++.h>
using namespace std;

bool check(long long val, int ind, int x, int mid){
	if (val + (1LL * (ind + 1) * (mid-1)) <= x) return true;
	return false;
}

int binary(long long val, int ind, int x){
	int low = 1, high = 1e9 + 5;
	int ans = 0;

	while (low <= high){
		int mid = low + (high - low) / 2;

		if (check(val, ind, x, mid)){
			ans = mid;
			low = mid + 1;
		}
		else high = mid-1;
	} 
	return ans;
} 

int main(){
	int t;
	cin >> t;
	while (t--){
		int n, x;
		cin >> n >> x;
		vector<int> v(n); 
		for (int i = 0; i<n; i++) cin >> v[i];
		sort(v.begin(), v.end()); 		
		vector<long long> pre(n);

		pre[0] = v[0];
		for (int i = 1; i<n; i++) pre[i] = pre[i-1] + v[i];

		long long ans = 0;
		for (int i = 0; i<n; i++) ans += binary(pre[i], i, x); 
		cout << ans << "\n";
	}

	return 0;
}



