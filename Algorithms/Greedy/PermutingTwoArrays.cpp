/**
Idea: the best we can do is sort one in ascending and the other in descending. See if that works.
If this doesn't then we can't do better.
**/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;
    cin >> t;
    while(t-->0){
        int n,k;
        cin >> n >> k;
        vector<int> a(n);
        vector<int> b(n);
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        for(int i=0;i<n;i++){
            cin >> b[i];
        }
        sort(a.begin(),a.end());
        sort(b.rbegin(),b.rend());
        
        bool done = true;
        for(int i=0;i<n;i++){
            if(a[i]+b[i]<k){
                done = false;
                break;
            }
        }
        
        if(done){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
        
    }
    return 0;
}
