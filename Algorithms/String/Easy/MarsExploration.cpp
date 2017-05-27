#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    string s;
    cin >> s;
    int ans = 0;
    for(int i=0;i+2<s.size();i+=3){ //since we are accessing till i+2
        if(s[i]!='S'){ans++;}
        if(s[i+1]!='O'){ans++;}
        if(s[i+2]!='S'){ans++;}
    }
    cout << ans;
    return 0;
}
