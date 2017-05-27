#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    string s;
    string r;
    cin >> s >> r;
    int v1[26] = {};
    int v2[26] = {};
    for(int i=0;i<s.size();i++){
        v1[s[i]-'a']++;
    }
    for(int i=0;i<r.size();i++){
        v2[r[i]-'a']++;
    }
    int ans = 0;
    for(int i=0;i<26;i++){
        ans+= abs(v1[i]-v2[i]);
    }
    cout << ans;
    
    return 0;
}
