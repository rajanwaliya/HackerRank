#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin >> v[i];
    }
    int pivot = v[0];
    vector<int> ans;
    //smaller elements
    for(int i=0;i<n;i++){
        if(v[i]<pivot){
            ans.push_back(v[i]);
        }
    }
    //equal elements
    for(int i=0;i<n;i++){
        if(v[i]==pivot){
            ans.push_back(v[i]);
        }
    }
    //larger elements
    for(int i=0;i<n;i++){
        if(v[i]>pivot){
            ans.push_back(v[i]);
        }
    }
    
    //print ans
    for(int i=0;i<n;i++){
        cout << ans[i]<< " ";
    }
    return 0;
}
