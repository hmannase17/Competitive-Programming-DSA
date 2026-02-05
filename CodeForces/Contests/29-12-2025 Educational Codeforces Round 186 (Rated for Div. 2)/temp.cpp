#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t ;
    while(t--){ 
        long long a,b,n ;
        cin >> a >> b>> n ;
        long long sum = b-1 ;  // imp
        for(int i = 0 ; i<n ; i++){
            long long x ;
            cin >> x ;
            if(x < a) sum += x ;
            else sum += a;
        }
        cout << sum << "\n";
    }
    return 0;
}
