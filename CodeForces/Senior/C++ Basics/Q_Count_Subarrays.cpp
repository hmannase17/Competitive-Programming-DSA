#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int natural(int x){
    return x*(x+1)/2 ;
}

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        vector<int> v ;
        for(int i = 0 ; i<n ; i++) {
            int x ;
            cin >> x ;
            v.push_back(x);
        }

        int ans = 0 ;

        for(int i = 0 ; i<n ; i++){
            int ct = 1 ;
            while(i<n-1 && v[i] <= v[i+1]){
                i++ ;
                ct++ ;
            }
            ans += natural(ct);
        }

        cout << ans << endl ;
    }
    return 0;
}
