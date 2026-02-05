#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t; 
	while (t--){
		long long n;
		cin >> n;
		long long a[n];
		int zero = 0;
		for (int i = 0; i<n; i++) {
            cin >> a[i];
            if(!a[i]) zero++ ;
        }

		bool found_zero = false;
		int left = 0 , right = n-1;

		while (a[left] == 0) left++;
		// Find the first non-zero element from the right
		while (a[right] == 0) right--;

		// Check if there is any zero between the first and last non-zero elements
		for (int i = left; i <= right; i++){
			if (a[i] == 0) found_zero = true;
		}

		// Determine the minimum number of operations needed
		if (zero == n) // Case 1: All elements are zero
			cout << 0 << endl;
		else if (found_zero == false) // Case 2: No zero between non-zero elements
			cout << 1 << endl;
		else // Case 3: There is at least one zero between non-zero elements
			cout << 2 << endl;
	}
	return 0;
}
