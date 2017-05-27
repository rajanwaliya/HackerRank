#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

char rotate(char a,int k){
    if(k>=26){
        k = k%26;
    }
    //cout << "k is " << k << endl;
    //if(a<='Z' && a>='A' || a<='z' && a>='a'){
    if(a<='Z' && a>='A'){  
        int b = a-'A';
        b+=k;
        if( b > 'Z'-'A'){
            b = b%('Z'-'A')-1;
        }
//        cout << "b is " << b << endl;
        return 'A'+b;
    }
    if(a<='z' && a>='a'){
        int b = a-'a';
        b+=k;
        if( b > 'z'-'a'){
            b = b%('z'-'a')-1;
        }
       // cout << "b is " << b << endl;
        return 'a'+b;
    }
    else{
        return a;
    }
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n,k;
    string s;
    cin >> n;
    cin >> s;
    cin >> k;
    string ans = "";
    for(int i=0;i<n;i++){
        ans += rotate(s[i],k);
    }
    cout << ans;
    return 0;
}
