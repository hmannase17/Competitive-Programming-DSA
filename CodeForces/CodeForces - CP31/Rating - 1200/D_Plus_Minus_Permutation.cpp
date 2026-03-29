#include <bits/stdc++.h>
using namespace std;

long long natural(long long x){
    return x * (x + 1) / 2;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, x, y;
        cin >> n >> x >> y;

        long long lcm = (x * y) / gcd(x, y);

        long long ctX = n / x;
        long long ctY = n / y;
        long long common = n / lcm;

        long long onlyX = ctX - common;
        long long onlyY = ctY - common;

        // take largest onlyX values
        long long maxSum = natural(n) - natural(n - onlyX);

        // take smallest onlyY values
        long long minSum = natural(onlyY);
        cout << maxSum - minSum << endl;
    }
    
    return 0;
}