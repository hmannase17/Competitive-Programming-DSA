#include <iostream>

using namespace std;


int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, m, i, j;
        cin >> n >> m >> i >> j;
        
        // To maximize distance, we pick two opposite corners of the grid.
        // Corner 1: (1, 1)
        // Corner 2: (n, m)
        cout << 1 << " " << 1 << " " << n << " " << m << endl;
    }
    return 0;
}