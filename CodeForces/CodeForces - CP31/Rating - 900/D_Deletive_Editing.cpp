#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s , b ;
        cin >> s >> b ;

        int n = s.size();
		int m = b.size();

        bool can = true;
        int l = s.length()-1 ;
        
        vector<int> freqB(26, 0);
        for (int i = 0; i < m; i++) freqB[b[i] - 'A']++;

        for (int i = n - 1; i >= 0; i--) // Iterate over each character in s
		{
			// If the character in s is needed in t, decrement its count
			if (freqB[s[i] - 'A'] > 0)
				freqB[s[i] - 'A']--;
			else
				// Otherwise, mark it as removed by setting it to '.'
				s[i] = '.';
		}

		// Construct the final string by excluding marked characters
		string final_string = "";
		for (int i = 0; i < n; i++) // Iterate over each character in s
		{
			if (s[i] != '.')
				final_string += s[i];
		}

		// Check if the constructed final string matches the target word t
		if (final_string == b) // Compare the final string with t
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
    }
    return 0;
}

