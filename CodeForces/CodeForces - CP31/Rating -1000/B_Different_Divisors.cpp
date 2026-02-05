#include <bits/stdc++.h>
using namespace std;

bool valid(long long x){
    long long d = 1 , prev = 1;  // 1 itself
    long long mn = LLONG_MAX ;

    for(long long i = 2 ; i*i <= x ; i++){
        if(x%i == 0){
            d++ ;
            mn = min(mn , i-prev);
            prev = i ;
        }
    }
    return (d>=4 && mn<=2) ;
}

int main(){
	long long t;
	cin >> t; 
	while (t--){
		long long d;
		cin >> d; 
        long long ans = 0 ;

        for(long long i = 1 ; ; i++){
            if(valid(i)){
                ans = i ;
                break ;
            }
        }
		cout << ans << endl;
	}
	return 0;
}
