#include <bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,k,temp;
    cin >> n >> k;
    int ans = 0;
    //k is the height he can jump
    for(int i=0;i<n;i++){
        cin >> temp; // temp is the height of current hurdle
        if(temp<=k){
            //do nothing
        }else{ //if is power k is less, then need to drink that many drinks
            ans+= (temp-k);
            k = temp; // also update the power after drinking
        }
    }
    cout << ans;
    return 0;
}
