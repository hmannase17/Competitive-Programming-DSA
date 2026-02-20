#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl '\n'

void fastIO(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
}

void solve(){
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        vector<ll> a(n);
        int neg = 0;
        ll absSum = 0;
        ll mn = INT_MAX ;
        for(int i = 0; i<n; i++){
            cin >> a[i];
            if(a[i] < 0) neg++ ;
            absSum += abs(a[i]);
            mn = min(1LL*mn , abs(a[i]));
        }

        if(neg%2) cout << absSum - 2*mn << endl ;
        else cout << absSum << endl;
    }
}

int main(){
    fastIO();
    solve();
    return 0;
}