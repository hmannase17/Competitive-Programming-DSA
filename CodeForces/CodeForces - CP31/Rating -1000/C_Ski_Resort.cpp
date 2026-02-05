#include <bits/stdc++.h>
using namespace std;

inline int natural(int n){
    return n*(n+1)/2 ;
}

int main(){
	int t;
	cin >> t;
	while (t--)	{
		int n,k,q;
        cin >> n>>k>>q ;
        vector<int> v(n);
        for(int i = 0 ; i<n ; i++){
            cin >> v[i];
        }

        long long ans = 0 ;
        int ct = 0 ;

        for(int i = 0 ; i<n-1 ; i++){
            if(v[i] <= q) ct++ ;
            else {
                if(ct >= k) ans += natural(ct-k);
                ct = 0 ;
            }
        }
        if(ct >= k) ans += natural(ct-k);
        cout << ans << endl ;
    }
	return 0;
}
