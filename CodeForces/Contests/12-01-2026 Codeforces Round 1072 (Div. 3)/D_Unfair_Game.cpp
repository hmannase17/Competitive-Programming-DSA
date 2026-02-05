#include <iostream>
#include <algorithm>
using namespace std;

long long C[65][65]; 

void comb(){
    for(int i = 0 ; i<=64 ; i++){
        C[i][0] = 1 ;
        C[i][i] = 1 ;
        for(int j = 1 ; j<i ; j++) C[i][j] = C[i-1][j] + C[i-1][j-1] ;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    comb();
    int t;
    cin >> t;
    while (t--){
        long long n, k;
        cin >> n >> k;

        int digits = 0;
        long long tmp = n;
        while(tmp){
            tmp /= 2;
            digits++;
        }

        long long ans = 0;
        for(int i = 1; i <digits; i++){
            int req = k - i + 1;
            for(int j = 0; j <= i-1; j++) {
                if(j >= req) {
                    ans += C[i-1][j];
                }
            }
        }
        if (digits > k) {
            ans++;
        }
        cout << ans << endl; 
    }
    return 0;
}