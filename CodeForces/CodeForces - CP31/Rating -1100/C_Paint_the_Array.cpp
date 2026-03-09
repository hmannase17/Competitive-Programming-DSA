#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void check(vector<ll>& a , ll div , ll& ans , int& n , int start){
    bool wrong = false;
    for(ll j = start ; j<n ; j+=2){
        if(a[j] % div == 0){
            wrong = true ;
            break;
        }
    }
    if(!wrong) ans = max(ans , div);
}

ll solve() {
	int n;
	cin >> n;
    vector<ll> a(n);
	for (int i = 0; i<n; i++) cin >> a[i];
    ll ans = 0 ;

    // 101010101010...
    ll GCD = a[0];
    for(int i = 2 ; i<n ; i+=2) GCD = gcd(GCD , a[i]);

    // NOW check for each factor of this
    // No need for this because highest possible divisor is GCD itself
    
    check(a , GCD , ans , n , 1);
    
    // 0101010101...
    GCD = a[1];
    for(int i = 3 ; i<n ; i+=2) GCD = gcd(GCD , a[i]);
    check(a , GCD , ans , n , 0);

    return ans;
}

int main(){
	int t;
	cin >> t; 
	while (t--) cout << solve() << endl;
}
