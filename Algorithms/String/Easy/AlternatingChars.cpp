#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
//If there are N consecutive same character delete N-1 out of those N characters.

int main() {
    int t;
    cin >> t;
    string s;
    while (t-->0){
        cin >> s;
        char temp = s[0];
        int ans = 0;
        for(int i=1;i<s.size();i++){
            if(s[i]==temp){
                ans++; //delete the repeated char
            }else{
                temp = s[i];
            }
        }
        cout << ans << endl;
    }
    return 0;
}
