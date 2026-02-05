#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,k;
        cin >> n>>k;

        int sz = n*k ;
        vector<int> v(sz);

        for(int i = 0 ; i<sz ; i++) cin >> v[i];

        long long ans = 0 ;
        int jump = n/2 + 1 ;
        int idx = sz - jump;

        while(k--){
            ans += v[idx];
            idx -= jump;
        }

        cout << ans <<"\n";
    }
    return 0;
}