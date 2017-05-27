#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int t,n;
    cin >> t;
    while(t-->0){
        cin >> n;
        int ans = 0;
        int nc = n;
        while(nc>0){
            int curInt = nc%10;
            nc/=10;
            if(curInt==0){
                continue;
            }else{
                if(n%curInt==0){ans++;}
            }
        }
        
        cout << ans << endl;
    }
    return 0;
}
