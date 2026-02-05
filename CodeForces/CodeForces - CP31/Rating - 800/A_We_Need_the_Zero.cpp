#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        int x = 0  ;
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            x ^= a[i];
        }

        if(x == 0) cout << 0 << endl ;
        else if(n % 2) cout << x << endl ;
        else cout << -1 << endl ;

    }
}
