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

unordered_set<string> st;

int recur(string& s , int idx){
    if(idx >= s.length()) return ;

    int len = s.length() - 1 - idx ;
    string tmp = s.substr(s.begin() + idx , len);
    if(!st.count(tmp)) st.insert(tmp);

    recur(s , idx+1);
    recur(s , idx+2);
}

void solve(){
    int t ;
    while(t--){
        int n ;
        cin >> n ;
        string s ;
        cin >> s ;

        cout << recur(s , 0) << endl;
    }


}

int main() {
    fastIO();
    solve();
    return 0;
}
