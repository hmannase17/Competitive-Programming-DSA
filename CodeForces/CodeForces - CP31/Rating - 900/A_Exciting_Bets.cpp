#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long a,b;
        cin >> a >> b;

// gcd(a + k, b + k) = gcd(a + k, |a - b|)

        if(a == b){
            cout << 0 << " " << 0 << endl;
            continue;
        }

// Minimum moves = distance to nearest multiple of |a-b|
        long long diff = abs(a - b);

        // Distance to the lower multiple of diff
        long long dist_to_lower = a % diff;
        
        // Distance to the higher multiple of diff
        long long dist_to_higher = diff - dist_to_lower;

        // The minimum moves is the smaller of the two distances
        long long ans = min(dist_to_lower, dist_to_higher);

        cout << diff << " " << ans << endl ;
    } 
    return 0;
}

