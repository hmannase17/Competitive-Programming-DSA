#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>> t ;
    while(t--){
        int n ;
        cin >> n ;

        vector<int> v(n);
        vector<bool> visited(n+1 , false);
        int j = n ;
        v[n-1] = 1 ;
        visited[1] = true ;

        for(int i = 2 ; i<=n-1 ; i++){
            v[i-1] = (i)^1 ;
            visited[v[i-1]] = true ;
        }

        for(int i = 1 ; i<=n ; i++){
            if(!visited[i]) {
                v[0] = i;
                break ;
            }
        }

        for(auto& x : v) cout << x << " ";
        cout << endl ;
    }
    return 0;
}
