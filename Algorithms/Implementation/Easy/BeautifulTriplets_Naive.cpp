#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,d;
    cin >> n >> d;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    
    int ans = 0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                if(a[j]-a[i]==d && a[k]-a[j]==d){
                    ans++;
                }
            }
        }
    }
    
    
    cout << ans;
    
    return 0;
}
