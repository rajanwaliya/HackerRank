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
    sort(v.begin(), v.end()); //
    int ans = 0;
    
    int canbuy = -1; //why not can buy initialized to 0? test case 5 wil fail, reason toy value can start from 0
    
    for(int i=0;i<n;i++){
        if(canbuy<v[i]){
            ans++;
            canbuy = v[i]+4;
        }
    }
    
    cout << ans;
    return 0;
}
