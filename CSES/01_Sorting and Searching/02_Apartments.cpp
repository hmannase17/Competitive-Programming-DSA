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
    ll n , m , k;
    cin >> n >> m >> k;

    vector<ll> a(n) , b(m);
    for(ll i = 0; i<n; i++) cin >> a[i];
    for(ll i = 0; i<m; i++) cin >> b[i];

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    
    int ans = 0 , i = 0 , j = 0;
    while(i<n && j<m){
        if(a[i] - k <= b[j] && a[i] + k >= b[j]){  // In range
            ans++ ;
            i++ ;
            j++ ;
        }
        else if(b[j] < a[i]+k) j++ ;
        else i++ ;
    }
    
    cout << ans << endl;
}

int main() {
    fastIO();
    solve();
    return 0;
}
