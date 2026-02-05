#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        string s ;
        cin >> s ;
        int l = 0 , r= n-1 ;

        while(l<r){
            if((s[l] == '1' && s[r] == '0') || (s[l] == '0' && s[r] == '1')){
                l++ ;
                r-- ;
            }
            else break;
        }

        if(l == r) cout << 1 << endl ;
        else if(l > r) cout << 0 << endl ;
        else cout << r-l+1 << endl ;
    }
}
