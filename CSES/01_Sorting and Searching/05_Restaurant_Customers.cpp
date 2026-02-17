#include <iostream>
#include <iomanip>
#include <string>
#include <cstring>
#include <cmath>
#include <cstdlib>
#include <cstdio>
#include <climits>
#include <cfloat>
#include <cassert>
#include <vector>
#include <array>
#include <deque>
#include <list>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <algorithm>
#include <numeric>
#include <functional>
#include <utility>
#include <bitset>
#include <chrono>
#include <random>
#include <fstream>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
#define endl '\n'

void fastIO(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
}

void solve(){
    ll n;
    cin >> n;
    vector<pair<ll , ll>> v(n);
    for(ll i = 0; i<n; i++) cin >> v[i].first >> v[i].second;
    sort(v.begin(), v.end());

    int ans = 1 , ct = 1;
    int end = v[0].second;

    for(int i = 1 ; i<n ; i++){
        if(v[i].first <= end) {
            ct++ ;
            end = min(1LL*end , v[i].second);
        }
        else {
            ct = 1;
            end = v[i].second;
        }
        ans = max(ans , ct);
    }
    cout << ans << endl;
}

int main() {
    fastIO();
    solve();
    return 0;
}
