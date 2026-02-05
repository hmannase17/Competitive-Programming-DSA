#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n = 10 , ans = 0;
        vector<vector<char>> v(n , vector<char>(n));

        for(int i= 0 ; i<n ; i++){
            for(int j = 0 ; j<n ; j++) cin >> v[i][j];
        }
        
        for(int i = 0 ; i<n/2 ; i++){
            for(int x = i ; x<n-i ; x++){
                if(v[i][x] == 'X') ans += (i+1) ;
                if(v[n-1-i][x] == 'X') ans += (i+1) ;
            }
            for(int y = i+1 ; y<n-1-i ; y++){
                if(v[y][i] == 'X') ans += (i+1) ;
                if(v[y][n-1-i] == 'X') ans += (i+1) ;
            }
        }
        cout << ans << endl ;
    }
}
