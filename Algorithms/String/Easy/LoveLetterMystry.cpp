#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin >> n;
    string s;
    while(n-->0){
        cin >> s;
        int mid = s.size()/2 - 1; //the index we want to travel till, verify with example of odd and even len strings
        int ans = 0;
        for(int i=0;i<=mid;i++){
                ans+= abs(s[s.size()-i-1]-s[i]);
        }
        cout << ans << endl;
        }
    return 0;
}
