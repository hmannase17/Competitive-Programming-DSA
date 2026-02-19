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
    int t ;
    cin >> t ;
    while(t--){
        ll n, k;
        cin >> n >> k;
        vector<ll> v(n);
        ll sum = 0;
        for(int i = 0 ; i<n ; i++){
            cin >> v[i];
            sum += v[i];
        }

        sort(v.begin() , v.end());
        int i = 0 , j = 1;
        int r = v.size()-1;

        while(k--){
            ll left = v[i] + v[j];
            ll right = v[r];

        // cout << i << " " << j << " " << r << " " << sum << endl ;

            if(left >= right){
                r-- ;
                sum -= right ;
            }
            else {
                i++ ;
                j++ ;
                sum -= left ;
            }

    // cout << i << " " << j << " " << r << " " << sum << endl ;
    //         cout << endl;
        }

        cout << sum << endl;
    }
}

int main() {
    fastIO();
    solve();
    return 0;
}
