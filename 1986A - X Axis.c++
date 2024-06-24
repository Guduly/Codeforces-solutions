#include <iostream>
#include <vector>
#include <cmath>
using std::cout;
using std::cin;
 
 
int main(){
 
    int t; 
    cin >> t; 
 
    while(t--){
 
        std::vector<int>a(3); 
 
        for(auto &c : a) cin >> c;
 
        std::vector<int>out(3); 
 
        for(int i = 0; i < a.size(); i++){
 
            int n = a[i]; 
            int in = abs(n-a[0]) + abs(n-a[1]) + abs(n-a[2]);
            out[i] = in;
 
        }
 
        int min = INT_MAX;
        int index; 
 
        for(int k = 0; k < out.size(); k++){
 
            if(out[k] < min){
                min = out[k]; 
                index = k; 
            }
 
        }
 
        cout << out[index] << std::endl; 
 
    }
 
}
