#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>> t ;
    while(t--){
        int n,s,x ;
        cin >> n >>s>>x ;
        int sum = 0 ;
        for(int i = 0 ; i<n ; i++){
            int xx;
            cin >> xx ;
            sum += xx ;
        }

        if(s < sum) cout << "NO\n" ;
        else {
            int d = sum - s ;
            if(d%x == 0) cout << "YES\n" ;
            else cout << "NO\n";
        }

    }
    return 0;
}
