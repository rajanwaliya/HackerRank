#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    string s;
    long n;
    cin >> s >> n;
    //count ones in the string s
    int as = 0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='a'){as++;}
    }
    if(as==0){
        cout << 0;
        return 0; //finish executing the main method
    }
    
    long m = s.size();
    //first n chars will contain full string s, n/m times 
    // and n%m first chars of s
    long full_times = n/m;
    int first_chars = n%m;
    long ans = 0;
    for(int i=0;i<first_chars;i++){
        if(s[i]=='a'){ans++;}
    }
    ans += full_times*as;
    
    cout << ans;
    
    return 0;
}
