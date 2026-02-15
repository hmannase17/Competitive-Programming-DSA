#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--){
		long long a,b;
		cin >> a >> b; 
        
        long long x = a-1;
        long long XORtillX ;
        
        // for(int i = 1 ; i<=a-1 ; i++) XORtillX ^= i ;
        if(x % 4 == 0) XORtillX = x ;
        else if(x % 4 == 1) XORtillX = 1 ;
        else if(x % 4 == 2) XORtillX = x+1 ;
        else if(x % 4 == 3) XORtillX = 0 ;
        
        long long ans = a;  // for mex, and XOR == b
        if(XORtillX != b){
            // edge case , because a can not be present in the array , we need to choose two diff values
            if((XORtillX ^ b) == a) ans += 2; 
            else ans ++ ;
        }
        cout << ans << endl;
    }
    return 0;
}