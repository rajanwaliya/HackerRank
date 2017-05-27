#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/**
find the minimum width in range [i,j]
**/

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n,t;
    cin >> n >> t; 
    int w[n];
    for(int i=0;i<n;i++){
        cin >> w[i];
    }
    while(t-->0){
        int i,j;
        cin >> i >> j;
        int minw = 4; // to find minimum, initialize with maximum possible
        for(int k=i;k<=j;k++){
            minw = min(minw,w[k]);
        }
        cout << minw << endl;
    }
    return 0;
}
