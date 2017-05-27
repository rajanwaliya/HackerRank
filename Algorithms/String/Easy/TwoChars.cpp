#include <bits/stdc++.h>
using namespace std;


int main() {
    int n;
    string s;
    cin >> n;
    cin >> s;
    int ans = 0;
    for(int i=0;i<26;i++){ //first char ie 'x'
        for(int j=0;j<26;j++){ //second char ie 'y'
            if(i==j){continue;} // t needs to be of two distinct chars
            int p1 = i;
            int p2 = j;
            int len = 0;
            bool flag = true;
            for(int k=0;k<s.size();k++){
                if(s[k]-'a'!=p1 && s[k]-'a'!=p2){ //ignore other chars
                    continue;
                }
                if(s[k]-'a'==p1){ //why are we not considering p2?
                    len++;
                    swap(p1,p2); 
                }
                else{
                    flag =  false;
                    break;
                }
            }
            if(flag && len>1){ //at least two len for two distinct char, and need to keep ans initially 0 (why?)
                ans = max(ans,len);
            }
        }
    }
    cout << ans ;
        
    return 0;
}
