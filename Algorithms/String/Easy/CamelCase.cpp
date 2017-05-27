#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

//idea: number of camel cases+1
int main() {
    string s;
    cin >> s;
    int ans = 0;
    for(int i=0;i<s.size();i++){
        if(s[i]>='A'&&s[i]<='Z'){
            ans += 1;
        }
    }
    cout << (ans+1) << endl;
    return 0;
}
