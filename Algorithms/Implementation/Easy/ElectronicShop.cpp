#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int s,n,m,temp;
    cin >> s >> n >> m;
    vector<int> key;
    vector<int> usb;
    for(int i=0;i<n;i++){
        cin >> temp;
        key.push_back(temp);
    }
    for(int i=0;i<m;i++){
        cin >> temp;
        usb.push_back(temp);
    }
    int ans = -1; //default value is -1, if none of the combo is in budget
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(key[i]+usb[j]<=s && key[i]+usb[j]>ans){
                ans = key[i]+usb[j];
            }
        }
    }
    cout << ans;
    return 0;
}
