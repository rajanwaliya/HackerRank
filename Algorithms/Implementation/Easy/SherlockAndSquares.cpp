#include <bits/stdc++.h>
using namespace std;


int main() {
    int t;
    cin >> t;
    while(t-->0){
        long a,b;
        int ans = 0;
        cin >> a >>b;
        
        long i;
        for(i=1; ;i++){
            if(i*i>b){break;}
            if (i*i<=b && i*i>=a){ans++;}
        }
        cout << ans << endl; 
    }
    
    return 0;
}
