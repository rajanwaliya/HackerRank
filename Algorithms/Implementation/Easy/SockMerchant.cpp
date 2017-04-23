#include <bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,temp;
    vector<int> v;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> temp;
        v.push_back(temp);
    }
    vector<bool> taken(n,0);
    int ans = 0;
    for(int i=0;i<n-1;i++){
        if(taken[i]){
            continue; //why?
        }
        for(int j=i+1;j<n;j++){
            if(!taken[i] && !taken[j] && v[i]==v[j]){
                ans++;
                taken[i] = true;
                taken[j] = true;
                break; //why ?
            }
        }
    }
    cout << ans;
    return 0;
}
