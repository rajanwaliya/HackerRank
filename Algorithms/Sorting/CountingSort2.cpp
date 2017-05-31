#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    //same as last question counting sort1 starts...
    int n;
    cin >> n;
    vector<int> c(101); //doesn't need to be 101, 100 will also be ok, why?
    int temp;
    for(int i=0;i<n;i++){
        cin >> temp;
        c[temp]++;
    }
    
    for(int i=0;i<100;i++){
        //instead of printing the count, print the number as many time as count
        while(c[i]-->0){ //try using for loop? because what if we had to use this count further in code?
            cout << i << " ";
        }
    }
    
    return 0;
}
