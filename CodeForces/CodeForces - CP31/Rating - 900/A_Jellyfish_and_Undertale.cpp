#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t ;
    while(t--){
        long long a,b,n ;
        cin >> a >> b>> n ;
        long long sum = b ; 
        for(int i = 0 ; i<n ; i++){
            long long x ;
            cin >> x ;
            sum += min(x , a-1);
        }
        cout << sum << "\n";
    }
    return 0;
}
