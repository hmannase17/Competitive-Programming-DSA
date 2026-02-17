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
    vector<ll> v(n) , end(n);
    for(ll i = 0; i<n; i++) cin >> v[i] >> end[i];

    sort(v.begin(), v.end());
    sort(end.begin(), end.end());

    int ans = 1 , ct = 1;
    int l = 0;

    for(int i = 1 ; i<n ; i++){
        while(end[l] <= v[i]){  
            ct-- ;
            l++;
        }
        ct++;
        ans = max(ans , ct);
    }
    cout << ans << endl;
}

int main() {
    fastIO();
    solve();
    return 0;
}
