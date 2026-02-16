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

        vector<int> a(n+1);
        for(int i=1; i<=n; i++) cin >> a[i];

        vector<int> visited(n+1,0);

        for(int i=1; i<=n; i++){
            if(visited[i]) continue;

            vector<int> tmp;
            int j = i;

            while(j <= n){
                visited[j] = 1;
                tmp.push_back(j);
                j *= 2;
            }

            sort(tmp.begin(), tmp.end());

            vector<int> val;
            for(int& x : tmp) val.push_back(a[x]);

            sort(val.begin(), val.end());

            for(int k=0 ; k<tmp.size(); k++) a[tmp[k]] = val[k];
        }

        bool flag = true;
        for(int i=2; i<=n; i++){
            if(a[i] < a[i-1]){
                flag = false;
                break;
            }
        }

        if(flag) cout << "YES\n";
        else cout << "NO\n";
    }
}


int main() {
    fastIO();
    solve();
    return 0;
}
