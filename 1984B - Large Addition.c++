#include <bits/stdc++.h>
#include <algorithm>
#include <string>
#include <numeric>
using std::cout;
using std::cin;
typedef long long ll; 
 
inline void solve(){
 
    std::string s; cin >> s; 
 
    bool out = true; 
 
    if(s[0] != '1')
        out = false; 
    if(s.back() == '9')
        out = false; 
 
    for(int i = 1; i < s.size()-1; i++){
        if(s[i] == '0')out = false; 
    }
 
    if(out == true) cout << "YES\n"; 
    else cout << "NO\n"; 
}
 
 
int main(){    
    int t; cin >> t; 
    while (t--)
    {
       solve();
    }
}
