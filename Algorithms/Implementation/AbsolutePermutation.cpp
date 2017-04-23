#include <bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t,n,k,posi1,posi2;
    cin >> t;
    while(t-->0){
        cin >> n >> k;
        vector<bool> taken(n+1,false);
        vector<int> ans;
        bool canMake = true;
        for(int i=1;i<n+1;i++){
            posi1 = k + i;
            posi2 = i - k;
            if(posi2>0 && posi2<n+1 && !taken[posi2]){
                ans.push_back(posi2);
                taken[posi2]  = true;
                continue;
            }
            if(posi1>0 && posi1<n+1 && !taken[posi1]){
                ans.push_back(posi1);
                taken[posi1] = true;
                continue;
            }
            canMake = false;
            break;
        }
        if(canMake){
            for(int i=0;i<ans.size();i++){
                cout << ans[i] << " ";
            }
            cout << endl;
        }else{
            cout << -1 << endl;
        }
    }
    return 0;
}

