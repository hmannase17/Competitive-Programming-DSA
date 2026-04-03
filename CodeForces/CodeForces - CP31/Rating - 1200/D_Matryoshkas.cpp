#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int t;
	cin >> t; 
	while (t--){
		int n;
		cin >> n; 
		vector<ll> v(n);

        map<int , int> m;
		for (int i = 0; i<n; i++){
            cin >> v[i];
            m[v[i]]++;
        }

		int ans = 0; 

        for(auto& it : m) ans += max(0 , m[it.first] - m[it.first-1]);
        cout << ans << "\n";
	}
	return 0;
}



