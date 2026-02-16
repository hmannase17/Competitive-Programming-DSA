#include <iostream>
#include <vector>
using namespace std;
const long long MOD = 1e9+7;

int n;
vector<pair<int, int>> adj;
vector<long long> v;
vector<long long> ans;

void dfsB(int u){
    auto [l , r] = adj[u];

    if (l == 0){
        v[u] = 1;
        return ;
    }
    dfsB(l);
    dfsB(r);
    v[u] = (v[l]+v[r]+3) % MOD;
}

void dfsT(int u){
    auto [l , r] = adj[u];
    if (l == 0) return ;
    
    ans[l] = (ans[u]+v[l]) % MOD;
    ans[r] = (ans[u]+v[r]) % MOD;
    dfsT(l);
    dfsT(r);
}

void solve(){
    cin >> n;
    adj.assign(n+1, {0, 0});
    v.assign(n+1, 0);
    ans.assign(n+1, 0);

    for (int i = 1; i<=n; i++) cin >> adj[i].first >> adj[i].second;
    dfsB(1);
    ans[1] = v[1];  // edge case
    dfsT(1);

    for (int i = 1; i<=n; i++) cout << ans[i] << " ";
    cout << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t ;
    while (t--) solve();
    return 0;
}