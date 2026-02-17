#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t; 
	while (t--){
		long long n, x;
		cin >> n >> x; 
		vector<long long> a(n);
		for (long long i = 0; i<n; i++) cin >> a[i];

		vector<pair<long long, long long>> interval(n);
		for (int i = 0; i<n; i++)
			interval[i] = {a[i] - x, a[i] + x};

		long long ans = 0; 
		
		long long l = interval[0].first;
		long long r = interval[0].second;

		for (int i = 1; i<n; i++){  // find overlapping
			l = max(l, interval[i].first);
			r = min(r, interval[i].second);
			
			if (l > r){
				ans++;
				l = interval[i].first;
				r = interval[i].second;
			}
		}
		cout << ans << endl; 
	}
}



