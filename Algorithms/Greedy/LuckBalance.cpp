/**
There is no point in winning unimportant contests, so we can just lose all of them and get their luck. 
Can lose at most 'k' important ones, so make the most of it, buy loosing the ones with 
max luck. To do that sort the imp in desc order and pick top k to lose
**/


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,k;
    vector<int> imp;
    int ans;
    cin >> n >> k;
    int l,t;

    while (n-->0){
        cin >> l >> t;
        if(t==0){
            ans+= l;
        }else{
            imp.push_back(l);
        }
    }

    sort(imp.rbegin(),imp.rend());
    
    for(int i=0;i<imp.size();i++){
        if(i<k){
            ans+=imp[i];
        }
        else{
            ans-=imp[i];
        }
    }
           
    cout << ans;
    return 0;
}
