#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
	ll n , k;
	cin >> n >> k;
	vector<vector<ll>> grid(n , vector<ll>(n)); 

    for(int i = 0 ; i<n ; i++){
        for(int j = 0 ; j<n ; j++){
            cin >> grid[i][j];
        }
    }
    
    for(int i = 0 ; i<n/2 ; i++){  // go only half way
        for(int j = 0 ; j<n ; j++){
            if(grid[i][j] != grid[n-1-i][n-1-j]) k-- ;
        }
    }
    
    // check middle row if odd
    if(n % 2 != 0){
        for(int j = 0 ; j<n/2 ; j++) if(grid[(n/2)][j] != grid[(n/2)][n-1-j]) k-- ;
    }

    // we need to do exactly k operations
    if(k < 0) cout << "NO\n";
    else if(n % 2 == 0 && k % 2) cout << "NO\n";  // in odd we can apply on middle element as many times we want
    else cout << "YES\n";
}

int main(){
	int t;
	cin >> t;
	while (t--) solve();
}
