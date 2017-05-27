#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

//i is the current cloud index she is at
// sum is the number of steps she has taken
// a is the cloud array
// n is size of a
int method(int i, int sum,int n,int a[]){
    if(i>=n){return ;} //game over return something impossible
    if(i==n-1){return sum;}
    if(a[i]==1){return n+10;}//game over return something impossible
    //for normal index
    //two choices are there
    //1. go to i+1
    //2. go to i+2
    return min(method(i+1,sum+1,n,a),method(i+2,sum+1,n,a));
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    cout << method(0,0,n,a);
    return 0;
}
