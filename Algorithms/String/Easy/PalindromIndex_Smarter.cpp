#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool isPalin(string s){
    string r = s;
    reverse(r.begin(),r.end());
    return s==r;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    string s;
    cin >> n;
    while(n-->0){
        cin >> s;
        if(isPalin(s)){
            cout << "-1" << endl;
            continue;
        }
        for(int i=0;i<s.size()/2;i++){
            if(s[i]!=s[s.size()-i-1]){
                if(isPalin(s.substr(0,i)+s.substr(i+1,s.size()))){
                    cout << i << endl;
                }else{
                    cout << (s.size()-i-1) << endl;
                }
                break;
            }
        }
    }
    return 0;
}
