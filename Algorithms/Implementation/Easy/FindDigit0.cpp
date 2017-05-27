#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t,n;
    cin >> t;
    while(t-->0){
        cin >> n;
        int ans = 0;
        string s = to_string(n);
        //again convert to string to access each digit easily
        // other option is to make a copy and keep dividing by 10
        for(int i=0;i<s.size();i++){
            int curInt = s[i]-'0';
            if(curInt==0){continue;} //to avoid divide by zero exception
            if(n%curInt==0){
                ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
