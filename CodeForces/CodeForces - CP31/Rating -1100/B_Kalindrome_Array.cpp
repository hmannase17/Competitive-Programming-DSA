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
        ll n;
        cin >> n ;
        vector<ll> a(n);
        for(int i = 0; i<n; i++) cin >> a[i];

        ll l = 0, r = n-1;
        int x = -1;

        while(l <= r){
            if(a[l] != a[r]){
                if(x == -1){
                    x = a[r];
                }
                if(a[l] == x) l++ ;
                else if(a[r] == x) r-- ;
                else {
                    cout << "NO\n" ;
                    return ;
                }
            }
            else {
                l++ ; 
                r-- ;
            }
        }
        cout << "YES" << endl;
    }
}

int main(){
    fastIO();
    solve();
    return 0;
}