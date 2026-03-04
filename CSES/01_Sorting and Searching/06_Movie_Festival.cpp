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

bool static comp(const pair<ll,ll>& a , const pair<ll,ll>& b){
    return a.second < b.second;
}

void solve(){
    ll n;
    cin >> n;
    vector<pair<ll,ll>> v(n);

    for(ll i = 0; i<n; i++) cin >> v[i].first >> v[i].second;

    // sort by deadline time it will take to finish one movie
    sort(v.begin(), v.end(), comp);

    ll ans = 1;
    ll end = v[0].second;

    for(int i = 1 ; i<v.size() ; i++){
        if(v[i].first >= end){
            ans++ ;
            end = v[i].second ;
        }
    }

    cout << ans << endl;
}

int main() {
    fastIO();
    solve();
    return 0;
}
