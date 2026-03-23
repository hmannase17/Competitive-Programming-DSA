#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) { 
		int n;
		cin >> n;
		long long arr[n];
		for (int i = 0; i<n; i++) cin >> arr[i]; 

		
		long long ans = 0;
		for (int i = 1; i <= 60; i++) { 		
			set<long long> s;
			long long k = 1LL << i;  // power of 2 
	
			for (int idx = 0; idx<n; idx++) s.insert(arr[idx] % k); 
			if (s.size() == 2) {
				ans = k;
				break;
			}
		} 
		cout << ans << endl;
	}
}


