#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, x;
        cin >> n >> x;

        vector<int> v(n);
        for(int i = 0; i < n; i++) cin >> v[i];
        
        int d = v[0];
        for(int i = 1; i<n; i++) d = max(d , v[i]-v[i-1]);
        
        if(2*(x - v.back()) > d) d = 2*(x - v.back()) ;
        cout << d << endl ;
    }
    return 0 ;
}
