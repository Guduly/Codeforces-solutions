#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <vector>
using std::cout;
using std::cin;
typedef long long ll; 
 
char valid(char a){
    if(int(a) >= int('z'))
        return char(int(a)-1); 
    else
        return char(int(a)+1);
}
 
int stop(char a[], std::string s){
 
    int count = 0;
    int maxcount = 0;  
 
    for(int i = 0; i < s.size(); i++){
        if(a[i] == a[i+1]){
           count++; 
        }else{
            count = 0; 
        }
 
        if(count > maxcount)
            maxcount = count;
    }
 
    return maxcount; 
 
}
 
 
int main(){
    ll n; cin >> n; 
    while(n--){
 
        std::string in; cin >> in; 
 
        char arr[in.size()+1]; 
 
        std::strcpy(arr, in.c_str());
        
        std::string output; 
        int st = stop(arr, in);
        int count = 0; 
 
        if(in.size()==1){
            cout << in + valid(arr[0]) << std::endl;
        }else{
            for(int i = 0; i < in.size(); i++){
                if(arr[i] == arr[i+1]){
                    count++; 
                    if(count == st){
                        std::string start = in.substr(0, i+1); 
                        std::string end = in.substr(i+1, in.size()+1); 
                        output = start + valid(arr[i]) + end;
                    }   
                }else if(count == 0){
                    output = in + valid(arr[in.size()-1]); 
            }
            }
            
            cout << output << std::endl; 
        }
    }
}
