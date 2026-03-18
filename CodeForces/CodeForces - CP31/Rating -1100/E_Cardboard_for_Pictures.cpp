#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
	ll n, c; 
	cin >> n >> c;
	vector<ll> v(n); 

	for (int i = 0; i<n; i++) cin >> v[i];

    ll ans = -1, l = 1 , r = 1e9;

    while(l<=r){
        ll m = l + (r-l)/2;
        ll curr = 0;

        for (int i = 0; i<n; i++){
			curr += (v[i] + 2 * m) * (v[i] + 2 * m);
			if (curr > c) break; // break early
		}

        if(curr <= c){
            ans = m;
            l = m+1 ;
        }
        else r = m-1;
    }
	cout << ans << endl; 
}

int main(){
	int t; 
	cin >> t;
	while (t--) solve(); 
}