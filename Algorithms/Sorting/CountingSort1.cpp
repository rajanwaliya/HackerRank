#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin >> n;
    //since x< 100
    vector<int> c(101); //value of index i : c[i]: number of times i appeared
    int temp;
    for(int i=0;i<n;i++){
        cin >> temp;
        c[temp]++;
    }
    
    //for(int i=0;i<101;i++){
    // ^ didn't read carefully, they need upto 99 only
    for(int i=0;i<100;i++){
        cout << c[i] << " ";
    }
    return 0;
}
