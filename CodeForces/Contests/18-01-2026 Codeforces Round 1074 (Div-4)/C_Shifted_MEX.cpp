#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    // Your code here
    int t;
    cin>> t ;
    while(t--){
        int n ;
        cin >> n ;
        vector<long long> a(n) ;
        for(int i = 0 ; i<n ; i++) cin >> a[i] ;
        sort(a.begin() , a.end());
        
        int mx = 1;
        int ans  = -1 ;
        
        auto end = unique(a.begin() , a.end());

        a.erase(end , a.end());
        n = a.size() ;

        for(int i = 0 ; i<n-1 ; i++){
           int ct = 1 ;
           int val = a[i] ;
           while(i<n-1 && (a[i]+1 == a[i+1])){
             ct++ ;
             i++;
           }

           if(ct > mx){
            mx = ct ;
            ans = val ;
           }
        }

        cout << mx << endl ;

    }
    return 0;
}
