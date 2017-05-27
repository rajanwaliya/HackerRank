#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/**
idea: count all the students arriving on time ie early ie negative time
if it is less than threshold(k) then canceled, otherwise not.
**/

int main() {
    int t,n,k,temp;
    cin >> t;
    
    while(t-->0){
        cin >> n >> k;
        int count = 0; // to keep count of negative ai
        for(int i =0;i<n;i++){
            cin >> temp;
            if(temp<=0){
                count++;
            }
        }
        if(count>=k){
            cout << "NO" << endl;
        }else{
            cout << "YES" << endl;
        }
    }
    return 0;
}
