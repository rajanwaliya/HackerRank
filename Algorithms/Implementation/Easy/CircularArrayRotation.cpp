#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n,k,q,temp;
    cin >> n >> k >> q;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> temp;
        a[i] = temp;
    }
    //for(int i=0;i<n;i++){cout<< a[i]<< " ";}
    //cout << endl;
    while(q-->0){
        cin >> temp;
        //cout << "temp was "<< temp;
        //after k right rotation, at i index, i-k index resides
        temp=(temp-k)%n;
        //to take modulo n of negative number, we add n to it
        if(temp<0){
            temp+=n;
        }
        //cout << " : temp is "<< temp << endl;
        cout << a[temp] << endl;
    }
    return 0;
}
