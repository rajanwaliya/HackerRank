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
    vector<int> A(n);
    for(int i=0;i<n;i++){
        cin >> A[i];
    }
    int m;
    cin >> m;
    vector<int> B(m);
    vector<int> count(10001);
    
    for(int i=0;i<m;i++){
        cin >> B[i];
        count[B[i]]++;
    }
    
    for(int i=0;i<n;i++){
        count[A[i]]--;
    }
    
    for(int i=0;i<count.size();i++){
        /** prints the missing number, number of times it is missing
        while(count[i]>0)
            cout << i << " ";
            count[i]--;
        }**/
        //just prints the missing number
        if(count[i]>0){
            cout << i << " ";
        }
    }
    
    
    
    return 0;
}
