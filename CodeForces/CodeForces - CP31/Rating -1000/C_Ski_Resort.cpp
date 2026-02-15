#include <bits/stdc++.h>
using namespace std;

inline long long natural(long long n){
    return n*(n+1)/2 ;
}

int main(){
	int t;
	cin >> t;
	while (t--)	{
		int n,k,q;
        cin >> n>>k>>q ;
        vector<long long> v(n);
        for(int i = 0 ; i<n ; i++) cin >> v[i];
        
        long long ans = 0 ;
        long long ct = 0 ;

        for(int i = 0 ; i<n ; i++){
            if(v[i] <= q) ct++ ;
            else {
                if(ct >= k) ans += natural(ct-k+1);
                ct = 0 ;
            }
        }
        if(ct >= k) ans += natural(ct-k+1);
        cout << ans << endl ;
    }
	return 0;
}
