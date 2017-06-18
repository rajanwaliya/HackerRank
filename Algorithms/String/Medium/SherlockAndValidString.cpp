#include <bits/stdc++.h>

using namespace std;

string isValid(string s){
    // Complete this function
    vector<int> f(26,0);
    for(int i=0;i<s.size();i++){
        f[s[i]-'a']++;
    }
    
    int first = -1;
    
    int otherCount = 0;
    
    bool res = true;
    
    for(int i=0;i<26;i++){
        if(first!=-1 && f[i]==first){continue;}
        if(f[i]!=0){
            if(first==-1){
                first = f[i];
            }else{
                otherCount++;
            }
        }
    }
    if(otherCount>1){
        res = false;
    }
    
    if(res){
        return "YES";
    }else{
        return "NO";
    }
    
}

int main() {
    string s;
    cin >> s;
    string result = isValid(s);
    cout << result << endl;
    
    return 0;
}
