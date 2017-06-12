/**
In layman's terms, we will see if N is divisible by 3. If not, we will check for all i whether N-i is divisible 3 by and i by 5 . The first i to satisfy these conditions will be the number of threes and N-i the number of fives. 
**/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        string ans = "";
        for(int i=0;i<=n;i++){
            if(i%5==0 && (n-i)%3==0){
                for(int j=0;j<n-i;j++){
                    ans+="5";
                }
                for(int j=0;j<i;j++){
                    ans+="3";
                }
                break;
            }
        }
        
        if(ans==""){ans = "-1";}
        
        cout << ans << endl;
        
        
    }
    return 0;
}
