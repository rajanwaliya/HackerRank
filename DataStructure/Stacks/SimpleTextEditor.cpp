#include <bits/stdc++.h>
using namespace std;


int main() {
    //stack to keep the history of edits in string
    stack<string> st;
    //first the string was empty
    string s = "";
    st.push("");
    
    int t;
    cin >> t;
    
    int type;
    int tempi;
    string temp;
    
    while(t-->0){
        cin >> type;
        
        if(type==1){ //append (update hence need to push to the stack after this)
            cin >> temp;
            s += temp;
            st.push(s); 
        }
        if(type == 2){ //delete (update, hence need to push to the stack after this)
            cin >> tempi;
            s = s.substr(0,s.size()-tempi);
            st.push(s);
        }
        if(type==3){ //read, not an update
            cin >> tempi;
            cout << s[tempi-1] << endl;
        }
        if(type==4){ 
            st.pop(); //on top is the current one, so remove that
            s = st.top();
        }
    }
    return 0;
}
