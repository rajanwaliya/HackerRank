#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    string s;
    cin >> n >> s;
    int ans = 0;
    int l = 0; //current level
    for(int i=0;i<n;i++){
        if(s[i]=='U'){
            l++;
            //count only when coming out of valley, in other case, it will be coming down from the hill
            if(l==0){ans++;}
        }
        else{l--;}
        
            
    }
    cout << ans;
    return 0;
}
