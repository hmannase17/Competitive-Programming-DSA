#include <bits/stdc++.h>
using namespace std;

int main(){
	long long t;
	cin >> t;
	while (t--){
		long long n, p;
		cin >> n >> p;
		vector<pair<long long, long long>> v(n); 
		vector<long long> a(n), b(n); 

		for (int i = 0; i<n; i++) cin >> a[i];
		for (int i = 0; i<n; i++) cin >> b[i];

		for (int i = 0; i<n; i++) v[i] = {b[i], a[i]};

		sort(v.begin(), v.end());

		long long mn = p; 
		long long ct = 1; 

		for (auto& it : v){
			long long canBeShared = it.second; 
			long long currCost = it.first; 

			if (currCost >= p) break;

			if (ct + canBeShared > n){
				mn += (n - ct) * currCost;
				ct = n; 
				break;
			}
			else{
				mn += canBeShared * currCost; 
				ct += canBeShared; 
			}
		}
		mn += (n - ct) * p;
		cout << mn << endl; 
	}
	return 0;
}
