#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n ;
        cin >> n ;

        vector<int> a(n) , b(n) , c(n);
        for(int i = 0 ; i<n ; i++) cin >> a[i] ;
        for(int i = 0 ; i<n ; i++) cin >> b[i] ;
        for(int i = 0 ; i<n ; i++) cin >> c[i] ;
        
        int ans = 0;
        vector<bool> ab(n , true) , bc(n,true);
        
        for(int i = 0 ; i<n ; i++){
            for(int j = 0 ; j<n ; j++){
                if(a[j] >= b[(i+j)%n]){
                    ab[i] = false;   // yeh position kaam ki nahi h 
                    break;
                }
            }
        }

        for(int i = 0 ; i<n ; i++){
            for(int j = 0 ; j<n ; j++){
                if(b[j] >= c[(i+j)%n]){
                    bc[i] = false;   // yeh position kaam ki nahi h 
                    break;
                }
            }
        }
        
        for(int i = 0 ; i<n ; i++){
            if(!ab[i]) continue ;
            for(int j = 0 ; j<n ; j++){
                if(!bc[j]) continue ;
                ans++ ;
            }
        }

        cout << 1LL*ans*n << endl;
    }
    return 0;
}
