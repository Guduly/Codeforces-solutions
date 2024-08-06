#include<bits/stdc++.h>
#include<iostream>
#include<string>
typedef long long ll; 
using namespace std;
 
string solve(){
 
	ll n, s, m; 
	cin >> n >> s >> m; 
 
	vector<ll> a(n*2); 
 
	for(auto &c : a) cin >> c; 
 
	if(s <= a[0])
		return "YES"; 
	else if(m - a[a.size()-1] >= s)
		return "YES";  
	else{	
		int i = 1; 
		for(int j = 2; j < a.size(); j+=2){
			if(a[j] - a[i] >= s){ 
				return "YES";  
			}
			i+=2; 
		}
		return "NO"; 
	}
}
 
int main(){
	ll t; cin >>t; 
	while(t--){
		cout << solve() << endl; 
	}
}
