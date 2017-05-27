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
        bool flag = false;
        for(int i=0;i<s.size();i++){
            if(isPalin(s.substr(0,i)+s.substr(i+1,s.size()))){
                cout << i << endl;
                flag = true;
                break;
            }
        }
        if(!flag){
            cout << "-1" << endl;
        }
    }
    return 0;
}
