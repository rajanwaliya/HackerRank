#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/**
idea: find the int with maximum frequency, delete the others
**/

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    int freq[101]; //given that ai could be upto 100
    for(int i=0;i<101;i++){ //freq is initialized with garbage
        freq[i] = 0;
    }
    for(int i=0;i<n;i++){
        freq[a[i]]++;
    }
    int maxi = 0;
    for(int i=0;i<101;i++){
        maxi = max(maxi,freq[i]);
    }
    
    cout << (n-maxi) << endl;
    return 0;
}
