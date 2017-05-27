#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;
    cin >> t;
    string s;
    while(t-->0){
        cin >> s;
        //int v[26] ; this will generate array of random things
        int v[26] = {}; //this will generate array of 0s
        for(int i=0;i<s.size();i++){
            v[s[i]-'a']++;
        }
        int ans = 0;
        for(int i=0;i<26;i++){
            if(v[i]!=0){ans++;}
        }
        cout << ans << endl;
    }
    return 0;
}
