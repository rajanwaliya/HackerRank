#include <bits/stdc++.h>
using namespace std;

bool help(string s){
    //cout << "help called for "<<s<< endl;
    if(s==""){
        cout << "Empty String" << endl;
        return true;
    }
    bool reduced = false;
    for(int i=0;i<s.size()-1;i++){
        if(s[i]==s[i+1]){
            if(help(s.substr(0,i)+s.substr(i+2,s.size()))){return true;}
            reduced = true;
        }
    }
    if(!reduced){
        cout << s << endl;
        return true;
    }
    return false;
}

int main() {
    string s;
    cin >> s;
    help(s);
    return 0;
}

