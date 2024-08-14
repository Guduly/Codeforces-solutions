#include<bits/stdc++.h>
#include<iostream>
#include<string>
#include<algorithm>
 
using namespace std;
typedef long long ll; 
 
 
int main(){
	
	ll t; cin >> t; 
	
 
	while(t--){
		string n; cin >> n; 
		
		char arr[n.length()+1]; 
 
		strcpy(arr, n.c_str()); 
 
		if(n.length() == 3){
			if(arr[0] == '1' && arr[1] == '0' && arr[2] >= '2')
				cout << "YES" << endl; 
			else cout << "NO" << endl; 
 
		}else{
			if(arr[0] == '1' && arr[1] == '0' && arr[2] > '0')
				cout << "YES" << endl; 
			else cout << "NO" << endl;
		}
 
	}
}
