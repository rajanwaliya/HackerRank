#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,temp;
    cin >> n;
    int ans = 0;
    //no need to store entire array somewhere
    //keep adding elements to the ans while reading input
    for(int i=0;i<n;i++){
        cin >> temp;
        ans += temp;
    }
    cout << ans;
    return 0;
}