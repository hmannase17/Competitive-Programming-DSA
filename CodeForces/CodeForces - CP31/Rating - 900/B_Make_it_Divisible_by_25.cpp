#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n ;
        cin >> n ;
        
        // Observation ->
        //     ends with 0 / 5 
        //          ends with 0 -> preceding either 5 or 0   
        //          ends with 5 -> preceding either 2 or 7
        
        int  ct0 = 0 , ct5 = 0 , common = 0;
        bool found0 = false, found5 = false;

        while(n){
            int digit = n%10 ;    
            n /= 10 ;
            
            if(digit == 0 && !found0){
                long long tmp = n ;
                while(tmp){
                    if ((tmp%10 == 0) || (tmp%10 == 5)){
                        found0 = true ;
                        ct0 += common ;
                        break ;
                    }
                    ct0++ ;
                    tmp /= 10 ;
                }
            }
            else if(digit == 5 && !found5){
                long long tmp = n ;
                while(tmp){
                    if ((tmp%10 == 2) || (tmp%10 == 7)){
                        found5 = true ;
                        ct5 += common ;  // Important
                        break ;
                    }
                    ct5++ ;
                    tmp /= 10 ;
                }
            }
            common++ ;
        }
        
        int ans ;
        if(found0 && found5) ans = min(ct0 , ct5);
        else if(found0) ans = ct0 ;
        else if(found5) ans = ct5 ;
        else ans = common ;

        cout << ans << endl ;
    }
    return 0;
}
