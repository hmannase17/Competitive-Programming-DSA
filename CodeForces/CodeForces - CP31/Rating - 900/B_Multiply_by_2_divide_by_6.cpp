#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n ;
        cin >> n ;
        
        // Observation ->
        // n * (2(k)) / (6(m)) == 1
        // On solving 
        
        int  ct = 0 ;

        while(n>1){
            if(n % 6 == 0){
                n /= 6 ;
                ct++ ;
            }
            else if(n % 3 == 0){
                n /= 3 ;
                ct += 2 ;
            }
            else break ;
        }
        if(n != 1) {
            cout << -1 << endl ;
            continue ;
        }

        cout << ct << endl ;
    }
    return 0;
}
