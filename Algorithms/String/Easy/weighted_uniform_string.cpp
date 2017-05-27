#include <bits/stdc++.h>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    string s;
    cin >> s;
    set<int> st;
    char fchar = s[0];
    int temp = 1;
    st.insert(fchar-'a'+1);
    for(int i=1;i<s.size();i++){
        if(s[i]==fchar){
            temp++;
            st.insert(temp*(fchar-'a'+1));
        }else{
            fchar = s[i];
            temp = 1;
            st.insert((fchar-'a'+1));
        }
    }
    //of last char
    st.insert(temp*(fchar-'a'+1));
    
    int n;
    cin >> n;
    int q;
    while(n-->0){
        cin >> q;
        if(st.find(q)!=st.end()){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }
    }
    
    return 0;
}
