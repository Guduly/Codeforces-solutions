#include <bits/stdc++.h>
using std::cout;
using std::cin;


int main(){

    int t; 
    cin >> t; 

    while(t--){

       long long x, y, k;
       
       cin >> x >> y >> k;

       while(k > 0 && x != 1){

            long long count = (x/y + 1) * y-x; 
            count = std::max(1ll, count);
            count = std::min(k, count); 
            k -= count; 
            x += count; 

            while(x%y==0){
                x /= y;   
            }
            
       }

       cout << x + k%(y-1) << '\n'; 
  
    }
    
}
