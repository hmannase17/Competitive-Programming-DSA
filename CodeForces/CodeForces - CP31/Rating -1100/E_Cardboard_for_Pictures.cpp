#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
	ll n, c; 
	cin >> n;
	cin >> c;
	vector<ll> v(n); 

	for (int i = 0; i<n; i++) cin >> v[i];

    ll ans = -1, l = 0 , r = 1e10;

    while(l<=r){
        ll m = l + (r-l)/2;
        ll curr = 0;

        for(auto& x : v){
            ll tmp = (1LL*x + 2*m);
            curr += tmp*tmp;
            if(curr >= c) break;  // early safety check 
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
