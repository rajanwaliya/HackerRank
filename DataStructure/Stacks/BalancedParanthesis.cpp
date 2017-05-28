#include <bits/stdc++.h>
using namespace std;

char getMatch(char a){
    if(a=='}'){return '{';}
    if(a==')'){return '(';}
    return '[';
}

bool balanced(string s){
    stack<char> st;
    for(int i=0;i<s.size();i++){
        if(s[i]=='{' || s[i] == '(' || s[i] == '['){
            st.push(s[i]);
        }else{
            if(st.empty() || st.top()!=getMatch(s[i])){
                //cout << "didn't get match for " << s[i] << "at top we had "<<st.top() << endl;
                return false;}
            else{
                st.pop();
            }
        }
    }
    
    //the most important check
    if(st.empty()){
        return true;
    }
    return false;
}

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        string s;
        cin >> s;
        if(balanced(s)){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    
    return 0;
}
