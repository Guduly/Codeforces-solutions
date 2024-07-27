#include <bits/stdc++.h>
#include <algorithm>
#include <iostream>
#include <vector>
using std::cout;
using std::cin;
typedef long long ll; 
 
int main(){
    
    int n; cin >> n; 
 
    while(n--){
        int a = 0; 
        int l; 
        cin >> l; 
 
        if(l / 4 >= 1){
            a += (int)(std::floor(l/4));  
            l -= (int)(4*std::floor(l/4));  
        }
        if(l / 2 >= 1){
            a += (int)(std::floor(l/2));  
            l -= (int)(2*std::floor(l/2));  
        }
    
        cout << a << std::endl; 
    }
}
