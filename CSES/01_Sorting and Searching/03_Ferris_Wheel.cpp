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

ll gcd(ll a, ll b) {
    return (b == 0) ? a : gcd(b, a % b);
}

ll lcm(ll a, ll b) {
    return (a / gcd(a, b)) * b;
}

void solve(){
    ll n , x;
    cin >> n >> x;
    vector<ll> v(n);
    for(ll i = 0; i<n; i++) cin >> v[i];
    sort(v.begin(), v.end());

    int ans = 0;
    int l = 0, r = n-1 ;

    while(l<=r){
        ll sum = v[l] + v[r];
        
        if(sum <= x){
            l++ ;
            r-- ;
        }
        else r-- ;
        ans++ ;
    }
    cout << ans << endl;
}

int main() {
    fastIO();
    solve();
    return 0;
}
