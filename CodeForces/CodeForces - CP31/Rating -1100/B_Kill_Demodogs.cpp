#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int MOD = 1e9+7;

void solve(){
	ll n ; 
	cin >> n;

    // Most optimal will be diagnoal, and it does not matter we go by right then down or down then right , since symmetric
    // diagnolas only, sum of first squares of n
    // down to reach diagnols  

    // at the end sum upto n^2 + (n-1)^2 + n * 2022 ;
    ll ans = ((((n * (n + 1)) % MOD) * (4 * n - 1)) % MOD * 337) % MOD;
	cout << ans % MOD << endl; 
}

int main(){
	int t; 
	cin >> t;
	while (t--) solve(); 
}