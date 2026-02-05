#include <iostream>
using namespace std;

// A number has an odd divisor greater than 1 if and only if
// 👉 it is NOT a power of 2

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;

        // Remove all factors of 2
        while (n % 2 == 0) n /= 2;
        
        if (n>1) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
