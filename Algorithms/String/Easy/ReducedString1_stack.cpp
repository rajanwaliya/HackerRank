#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    stack<char> st;
    for(int i=0;i<s.size();i++){
        //if recently saw someone to pair with current char
        if(st.empty()||st.top()!=s[i]){
            st.push(s[i]);
        }else{ //keep this in the waiting
            st.pop();
        }
    }
    string ans = "";
    while(!st.empty()){
        ans+=st.top();
        st.pop();
    }
    reverse(ans.begin(),ans.end());
    cout << ans ;
    if(ans==""){
        cout << "Empty String";
    }
    return 0;
}
