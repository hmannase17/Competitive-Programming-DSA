#include <bits/stdc++.h>
using namespace std;

int mx = 0 , n , m;
string ans ;

void recur(vector<vector<int>>& v , string tmp, int i , int j){
    if(i >= n || j >=m) return ;

    if(i == n-1 && j == m-1){
        if(curr > mx){
            mx = curr ;
            ans = tmp;
        }
    }


}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        cin >> n >> m;

        vector<vector<int>> v(n , vector<int>(m));
        for(int i = 0 ; i<n ; i++){
            for(int j = 0 ; j<m ; j++){
                cin >> v[i][j];
            }
        }
        
        // prefix sum each row
        for(int i = 0; i<n; i++){
            for(int j = 1 ; j<m ; j++) {
                v[i][j] += v[i][j-1];
            }
        }
        
        string tmp;

        recur(v , tmp , i , j);

        long long ans = 0 ;

        for(int i = 0 ; i<n ; i++){
            long long X = 0 , Y = 0 ;
            for(int j = 0 ; j<m ; j++){
                long long l = j == 0 ? 0 : v[i][j-1]; 

                long long r = v[i][m-1] ;
                r -= j == 0 ? 0 : v[i][j-1] ;

                X += l ;
                Y += r ;
            }

            ans = max(ans , X*Y);
        }
        
        cout << ans << endl ;
        cout << route << endl ;
    }
    return 0;
}
