#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int t; 
	cin >> t;
	while (t--) {
		int n, x; 
		cin >> n >> x;

		// Precomputed OR results for each stack
		vector<int> pre[3];

		for (int i = 0; i<3; i++) { 
			int s = 0; 
			pre[i].push_back(s); // Start with 0

			// Read each book's difficulty in the stack
			for (int j = 0; j<n; j++) {
				int a;
				cin >> a;

				// If adding this book changes the OR result, update it
				if ((s | a) != s){
					s |= a;
					pre[i].push_back(s);
				}
			}
		}

		bool ans = false; 

		// Check all combinations of OR results from the three stacks
		for (int A : pre[0]) { 
			for (int B : pre[1]) { 
				for (int C : pre[2]) { 
					// Check if the combined OR result equals x
					if ((A | B | C) == x) ans = true;
				}
			}
		}
		cout << (ans ? "Yes\n" : "No\n");
	}
}
