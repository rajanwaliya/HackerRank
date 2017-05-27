#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/**
in an occurance 

**/

int main() {
    int n;
    int ans;
    string s;
    cin >> n;
    cin >> s;
    for(int i=0;i+2<n;i++){
        if(s[i]=='0' && s[i+1]=='1' && s[i+2]=='0'){
            ans++;
            s[i+2]='1';
        }
    }
    cout << ans;
    return 0;
}
