#include <bits/stdc++.h>
using namespace std;


int main() {
    int n;
    cin >> n;
    string s;
    while(n-->0){
        cin >> s;
        string r = s;
        reverse(r.begin(),r.end());
        //cout << s << " and " << r << endl;
        bool flag = true;
        for(int i=0;i<s.size()-1;i++){
            if(abs(s[i+1]-s[i])!=(abs(r[i+1]-r[i]))){
                flag = false;
                break;
            }
        }
        if(flag){
            cout << "Funny" << endl;
        }else{
            cout << "Not Funny" << endl;
        }
    }
    return 0;
}
