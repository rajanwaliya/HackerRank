#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    vector<int> v;
    cin >> n;
    int temp;
    for(int i=0;i<n;i++){
        cin >> temp;
        v.push_back(temp);
    }
    int ans = 0;
    for(int i=0;i<n-1;i++){
        if(v[i]%2==1){
            v[i]++;
            v[i+1]++;
            ans+=2;
        }
    }
    bool done = true;
    /**
    for(int i=0;i<n;i++){
        cout << v[i] << " ";
    }
    cout << endl;
    **/
    for(int i=0;i<n;i++){
        if(v[i]%2==1){
            done = false;
            break;
        }
    }
    if(done){
    cout << ans << endl;
    }else{
        cout << "NO" << endl;
    }
    return 0;
}
