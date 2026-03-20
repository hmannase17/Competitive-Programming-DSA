#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, q;
	cin >> n >> q;
	vector<int> firstIdx(51, INT_MAX);

	for (int i = 1; i<=n; i++){
		int color;
		cin >> color;
		
		if (firstIdx[color] == INT_MAX) firstIdx[color] = i;
	}

	while (q--) { 
		int color;
		cin >> color;
		
		int ans = firstIdx[color];
		
		for (int i = 1; i <= 50; i++) {
			if (firstIdx[i] < ans) firstIdx[i]++;
		}
		firstIdx[color] = 1;
		cout << ans << " ";
	}
	cout << endl;
}
