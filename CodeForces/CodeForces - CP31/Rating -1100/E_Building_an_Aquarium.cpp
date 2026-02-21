#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl '\n'

void fastIO(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
}

bool valid(vector<ll>& a , ll m , ll x){
    ll curr = 0;
    for(ll& x : a) curr += max(0LL , m-x);
    return curr <= x;
}

void solve(){
    int t;
    cin >> t;
    while(t--){
        ll n,x;
        cin >> n >> x;
        vector<ll> a(n);
        for(int i = 0; i<n; i++) cin >> a[i];

        ll ans = 0;
        ll l = 0, r = INT_MAX;

        while(l <= r){
            long long m = l + (r-l)/2;

            if(valid(a , m , x)){
                ans = m ;
                l = m+1 ;
            }
            else r = m-1 ;
        }
        cout << ans << endl;
    }
}

int main(){
    fastIO();
    solve();
    return 0;
}