#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while (t--)	{
		long long n,k;
        cin >> n>>k ;
        string s ;
        cin >> s ;

        vector<long long> pre(n);  // for number of whites
        pre[0] = s[0] == 'W' ? 1 : 0 ;  

        for(int i = 1 ; i<n ; i++) pre[i] = pre[i-1] + (s[i] == 'W');
        
        long long ans = n ;
        for(int i = 0 ; i<=n-k ; i++){
            long long curr;
            if(i == 0) curr = pre[i+k-1];
            else curr = pre[i+k-1] - pre[i-1];
            ans = min(ans , curr);
        }
        cout << ans << endl ;
    }
	return 0;
}
