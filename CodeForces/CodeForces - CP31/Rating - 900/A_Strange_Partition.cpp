#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        long long x;
        cin >> n >> x;

        long long sum = 0;
        long long mx = 0;

        vector<long long> a(n);
        for(int i = 0 ; i<n ; i++){
            cin >> a[i];
            sum += a[i]; 
            // Max beauty: sum of ceilings of each element
            mx += (a[i] + x - 1) / x;
        }
        // Min beauty: ceiling of the total sum
        long long mn = (sum + x - 1) / x;
        
        cout << mn << " " << mx << endl ;
    }
    return 0;
}