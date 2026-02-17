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
    ll n , m ;
    cin >> n >> m ;

    multiset<ll> ms ; // for dynamic deletions
    vector<ll> b(m);
    for(ll i = 0; i<n; i++){
        ll x ;
        cin >> x;
        ms.insert(x);
    }
    for(ll i = 0; i<m; i++) cin >> b[i];

    for(int i = 0 ; i<m ; i++){
        auto lb = ms.lower_bound(b[i]);  // sometimes overpass the values, thus checks are required

        if(lb == ms.begin() && (lb == ms.end() || *lb > b[i])){
            b[i] = -1;              // no ticket ≤ b[i]
            continue;
        }

        if(lb == ms.end() || *lb > b[i]) lb--;   // now safe

        b[i] = *lb;
        ms.erase(lb);
    }    

    for(ll& x : b) cout << x << endl;
}

int main() {
    fastIO();
    solve();
    return 0;
}

// #include <iostream>
// #include <set>
// using namespace std;

// int main() {
//     int n, m;
//     cin >> n >> m;

//     multiset<int> prices;
//     for (int i = 1; i <= n; i++) {
//         int x;
//         cin >> x;
//         prices.insert(x);
//     }

//     for (int i = 1; i <= m; i++) {
//         int x;
//         cin >> x;
//         auto it = prices.upper_bound(x);
//         if (it == prices.begin()) {
//             cout << "-1\n";
//         } else {
//             it--;
//             cout << *it << "\n";
//             prices.erase(it);
//         }
//     }
// }