#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    stack<char> st;
    for(int i=0;i<s.size();i++){
        //if no match on top of stack
        if(st.empty()||st.top()!=s[i]){
            st.push(s[i]);
        }else{ //if top matches current char, pop it (also not pushing the current char)
            //hence removing the pair
            st.pop();
        }
    }
    string ans = "";
    
    while(!st.empty()){
        ans+=st.top();
        st.pop();
    }

    //why reverse?
    reverse(ans.begin(),ans.end());
    cout << ans ;
    if(ans==""){
        cout << "Empty String";
    }
    return 0;
}
