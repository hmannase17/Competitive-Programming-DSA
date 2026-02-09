#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        long long n, w;
        cin >> n >> w;

        if(w == 1LL){
            cout << 0 << endl ;
            continue;
        }
        long long ans = n-n/w;
        cout << ans << endl ;

        
    }
    return 0;
}
