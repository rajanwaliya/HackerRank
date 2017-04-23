#include <bits/stdc++.h>
using namespace std;

vector<string> solution;

bool solve(vector<string> v, string s){
    //cout << "got string as "<< s << endl;
    if(s.size()==0){
        return true;
    }
    //match each of string in v
    for(int i=0;i<v.size();i++){
        if(v[i].size()<=s.size()){
            if(v[i] == s.substr(0,v[i].size())){
                solution.push_back(v[i]);
                //cout << "adding " << v[i] << " to solution" << endl;
                if( solve(v, s.substr(v[i].size()) ) ){
                    return true;
                }else{
                    return false;
                    //solution.pop_back();
                }
            }
        }
    }
    return false;
}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t,n;
    string temp;
    string loginAttempt;
    cin >> t;
    while(t-->0){
        cin >> n;
        vector<string> v;
        for(int i=0;i<n;i++){
            cin >> temp;
            v.push_back(temp);
        }
        cin >> loginAttempt;
        if(solve(v,loginAttempt)){
            for(int i=0;i<solution.size();i++){
                cout << solution[i] << " ";
            }
            cout << endl;
        }else{
            cout << "WRONG PASSWORD" << endl;
        }
        solution.clear();
    }
    return 0;
}
