#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void print(vector<int> v){
    for(int i=0;i<v.size();i++){
        cout << v[i] << " ";
    }
    cout << endl;
}


vector<int> qs(vector<int> v){
    if(v.size()<=1){
        return v;
    }
    int p = v[0];
    //divide into smallers and largers
    vector<int> s;
    vector<int> l;
    for(int i=1;i<v.size();i++){
        if(v[i]<p){
            s.push_back(v[i]);
        }else{
            l.push_back(v[i]);
        }
    }
    vector<int> s1 = qs(s);
    vector<int> l1 = qs(l);
    vector<int> ans;
    for(int i=0;i<s1.size();i++){
        ans.push_back(s1[i]);
    }
    ans.push_back(p);
    for(int i=0;i<l1.size();i++){
        ans.push_back(l1[i]);
    }
    print(ans);
    return ans;
    
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin >> v[i];
    }
    vector<int> ans = qs(v);
    return 0;
}
