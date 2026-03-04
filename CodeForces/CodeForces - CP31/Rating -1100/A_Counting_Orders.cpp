#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int MOD = 1e9 + 7;

void solve() {
    int n;
    cin >> n;

    ll ans = 1;
    vector<ll> a(n) , b(n);
    for(int i = 0 ; i<n ; i++) cin >> a[i];
    for(int i = 0 ; i<n ; i++) cin >> b[i];

    sort(a.begin() , a.end());
    sort(b.rbegin() , b.rend());

    vector<ll> biggerThanThis(n);

    for(int i = 0 ; i<n ; i++){
        ll curr = b[i];
        auto it = upper_bound(a.begin() , a.end() , curr);
        if(it == a.end()){
            cout << 0 << endl ;
            return ;
        }

        ll idx = it - a.begin();
        biggerThanThis[i] = n - idx ;
    }

    ll used = 0;
    for(auto& x : biggerThanThis) {
        if(x - used <= 0){
            cout << 0 << endl ;
            return ;
        }
        ans = ((ans% MOD) * ((x-used)%MOD)) % MOD;
        used++ ;
    }

    cout << ans << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) solve();
}