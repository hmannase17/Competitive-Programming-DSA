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
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i=0; i<n; i++) cin >> a[i];

        vector<int> v(6);

        for(int i = 0 ; i<6 ; i++) v[i] = (a[0] == i+1 ? 0 : 1);

        for(int i = 1 ; i < n ; i++){
            vector<int> tmp(6 , INT_MAX);

            for(int j = 0 ; j<6 ; j++){
                for(int k = 0 ; k<6 ; k++){
                    if(j == k) continue;
                    if((j+1) + (k+1) == 7) continue;

                    int cost = (a[i] == j+1 ? 0 : 1);
                    tmp[j] = min(tmp[j], v[k] + cost);
                }
            }
            v = tmp;
        }
        cout << *min_element(v.begin(), v.end()) << endl;
    }
}



int main() {
    fastIO();
    solve();
    return 0;
}
