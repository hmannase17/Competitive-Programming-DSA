#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    string s;
    cin >> s;
    ll n = s.size();

    ll consOnes = 0, ct = 0;

    for(char c : s){
        if(c == '1') ct++;
        else ct = 0;
        consOnes = max(consOnes , ct);
    }

    // 101 -> 1 is wrong , correct is 2 , it is cyclic 
    ll pre = 0, suf = 0;
    for(int i = 0; i<n && s[i] == '1'; i++) pre++;

    for(int i = n-1; i>=0 && s[i] == '1'; i--) suf++;

    if(pre + suf < n) consOnes = max(consOnes, pre + suf);
    else consOnes = n;   // all ones case

    if(consOnes == 0){
        cout << 0 << "\n";
        return;
    }

    if(consOnes == n){
        cout << n * n << "\n";
        return;
    }

    ll ans = 0;
    for(ll i = 1; i <= consOnes; i++) ans = max(ans, i * (consOnes - i + 1));
    cout << ans << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) solve();
}