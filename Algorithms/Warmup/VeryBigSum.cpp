#include <bits/stdc++.h>
using namespace std;

int main() {
    /* to remember using big enough data type when needed */   
    int n;
    long long int l,ans=0;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> l;
        ans += l;
    }
    cout << ans;
    return 0;
}
