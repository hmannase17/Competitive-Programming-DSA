#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	vector<long long> v(n);
    for(int i = 0 ; i<n ; i++) cin >> v[i];

    long long ans = 0;

    for(int i = 1 ; i<n ; i++){
        long long diff = v[i]-v[i-1];
        if(diff < 0){
            ans += abs(diff) ;
            v[i] = v[i-1];
        }
    }
    cout << ans << "\n";
    return 0;
}
