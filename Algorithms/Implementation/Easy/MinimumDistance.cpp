#include <bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    int ans = n+100;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]==a[j]){
                ans = min(ans,j-i);
            }
        }
    }
    if(ans==n+100){
        cout << -1;
    }else{
        cout << ans;
    }
    return 0;
}
