#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long t,n,m,s;
    cin >> t;
    while(t-->0){
        cin >> n >> m >> s;
        // m+s-1 th prisoner gets the last one
        //need to take %n 
        long ans = (m+s-1)%n;
        
        if(ans==0){ //there is no 0th prisoner, 0 comes due to %n
            cout << n << endl;
        }else{
            cout << ans << endl;}
    }
    return 0;
}
