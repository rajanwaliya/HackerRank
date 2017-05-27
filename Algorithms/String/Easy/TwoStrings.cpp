#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;
    cin >> t;
    while(t-->0){
        string s1;
        string s2;
        cin >> s1 >> s2;
        int v1[26]= {};
        int v2[26]= {};
        
        for(int i=0;i<s1.size();i++){
            v1[s1[i]-'a']++;
        }
        for(int i=0;i<s2.size();i++){
            v2[s2[i]-'a']++;
        }
        
        bool flag = false;
        
        for(int i=0;i<26;i++){
            if(v1[i]!=0 && v2[i]!=0){
                flag = true;
                break;
            }
        }
        
        if(flag){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
        
    }
    return 0;
}
