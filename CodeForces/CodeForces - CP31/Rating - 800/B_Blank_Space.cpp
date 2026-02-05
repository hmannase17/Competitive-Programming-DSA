#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n , curr = 0 , ans = 0 ;
        cin >> n;
        for(int i = 0; i<n; i++){
            int x ;
            cin >> x ;
            if(!x) curr++ ;
            else curr = 0 ;
            ans = max(ans , curr);
        }
        cout << ans << "\n";
    }
}
