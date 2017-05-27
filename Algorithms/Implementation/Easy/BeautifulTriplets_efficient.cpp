#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/**
observations:
 a is already sorted in ascending order
   for given a[i], if triplet exists, a[j] = a[i]+d and a[k] = a[i]+2d  
**/

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,d;
    cin >> n >> d;
    int a[n];
    
    vector<bool> e(20001,0); //of size 20001, initialized to 0
    
    for(int i=0;i<n;i++){
        cin >> a[i];
        e[a[i]] = 1;
    }
    
    int ans = 0;
    for(int i=0;i<n-2;i++){
        //could this be the first element of triplet?
        if(e[a[i]+d] && e[a[i]+2*d]){
            ans++;
        }
    }
    
    
    cout << ans;
    
    return 0;
}
