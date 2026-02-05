#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while (t--)	{
		string s ; 
        cin >> s ;

        int one = 0 , zero = 0 ;
        for(char& c : s){
            if (c == '1') one++ ;
            else zero++ ;
        }

        int ct = 0 ; 
        for(char& c : s){
            if (c == '1' && zero){
                zero-- ;
                ct++ ;
            }
            else if(c == '0' && one) {
                one-- ;
                ct++ ;
            }
            else break ;
        }
        cout << s.size() - ct << endl ;
	}
	return 0;
}
