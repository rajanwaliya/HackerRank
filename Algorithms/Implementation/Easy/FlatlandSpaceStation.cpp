#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,m;
    cin >> n >> m;
    //mark those with ss as 1 others as 0
    int c[n];
    for(int i=0;i<n;i++){c[i]=0;}
    int temp;
    while(m-->0){
        cin >> temp;
        c[temp] = 1;
    }
    
    int dp1[n];
    if(c[0]==1){dp1[0]=0;}
    else{dp1[0] = 100001;}
    for(int i=1;i<n;i++){
        if(c[i]==1){dp1[i]=0;}
        else{dp1[i]=dp1[i-1]+1;} 
    }
    int dp2[n];
    if(c[n-1]==1){dp2[n-1]=0;}
    else{dp2[n-1] = 100001;}
    for(int i=n-2;i>=0;i--){
        if(c[i]==1){dp2[i]=0;}
        else{dp2[i]=dp2[i+1]+1;}
    }
    
    int ans[n];
    int maxi = -1;
    for(int i=0;i<n;i++){
        ans[i] = min(dp1[i],dp2[i]);
        maxi = max(maxi,ans[i]);
    }
    cout << maxi;
    return 0;
}
