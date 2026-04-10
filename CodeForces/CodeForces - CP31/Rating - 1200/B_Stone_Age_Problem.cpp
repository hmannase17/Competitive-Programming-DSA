#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, q;
	cin >> n >> q;
	long long sum = 0;
	vector<pair<int, int>> v(n, {0, 0});

	for (int i = 0; i<n; i++) {
        cin >> v[i].first;
        sum += v[i].first;
    }

	pair<int, int> globalVal = {0, -1};
	
	for (int it = 1; it <= q; it++){
		int x;
		cin >> x;

		if (x == 1){
			int idx, val;
			cin >> idx >> val;
			idx--;
			
			if (v[idx].second > globalVal.second) sum += (val - v[idx].first);
			else sum += (val - globalVal.first);
			
			v[idx].first = val;
			v[idx].second = it;
		}
		else{
			int val;
			cin >> val;

			globalVal.first = val;
			globalVal.second = it;
			
			sum = (long long)(val) * n;
		}
		cout << sum << "\n";
	} 
	return 0;
}



