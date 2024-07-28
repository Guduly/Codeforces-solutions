#include <bits/stdc++.h>
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using std::cout;
using std::cin;
 
int main(){
    int n; cin >> n; 
    while(n--){
 
    int l; cin >> l; 
    std::vector<int>store(l); 
 
    for(auto &c : store) cin >> c; 
    int m = 0; 
    for(int i = 0; i < store.size(); i+=2){
        m = std::max(m, store[i]); 
    }
    cout << m << std::endl; 
 
    }
}
