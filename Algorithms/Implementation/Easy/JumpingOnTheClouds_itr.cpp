#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    cin >> n;
    int a[n];
    int dp[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    int inf = n+10; //something to avoid
    dp[0] = 0; //imp since dp array initially will have garbage
    if(a[1]==0){dp[1]=1;}
    else{dp[1] = inf;}
    for(int i=2;i<n;i++){
        if(a[i]==0){
            dp[i] = min(dp[i-1],dp[i-2])+1;
        }else{
            dp[i] = inf;
        }
    }
    cout << dp[n-1];
    return 0;
}
