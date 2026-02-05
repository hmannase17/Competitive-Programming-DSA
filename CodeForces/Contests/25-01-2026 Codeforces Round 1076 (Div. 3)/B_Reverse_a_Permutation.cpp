#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>> t ;
    while(t--){
        int n ;
        cin >> n  ;
        vector<int> a(n) ;
        for(int i = 0 ; i<n ; i++){
            cin >> a[i];
        }

        int l = 0 ,tmp = n;
        while(l<n && a[l] == tmp){
            l++ ;
            tmp-- ;
        }

        if(l >= n){
            for(int& x : a) cout << x << ' ' ;
            cout << endl ;
            continue ;
        }

        int r = l ;
        for(r = l ; r<n ; r++) if(a[r] == tmp) break ;

        reverse(a.begin()+l , a.begin()+r+1) ;
        for(int& x : a) cout << x << ' ' ;
        cout << endl ;
    }
    return 0;
}
