#include <bits/stdc++.h>
using namespace std;

unordered_map<long long, int> dp;

int recur(long long n, long long k){
    if (n == k) return 0;
    if (n <k) return -1;

    if (dp.count(n)) return dp[n];
    
    long long f = n / 2;           
    long long c = (n + 1) / 2;     

    int left = recur(f, k);
    int right = recur(c, k);

    int res = -1;
    if (left != -1 && right != -1)  res = 1 +min(left, right);
    else if (left != -1)  res = 1 + left;
    else if (right != -1)  res = 1 + right;
    return dp[n] = res;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        long long n, k;
        cin >> n >> k;
        dp.clear();
        cout << recur(n, k)<< endl;
    }
    return 0;
}