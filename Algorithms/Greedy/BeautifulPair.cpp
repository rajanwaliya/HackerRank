/**
From the most popular comment in discussion:
The way the "disjoint pair" condition was phrased was, to me, very confusing.

As they explained it; "in order for a beautiful pair to be considered disjoint, its indices cannot appear in any other beautiful pairs". This, to me, meant that any indices with multiple value matches would be excluded from the final set.

What they MEANT was "each i and j index can only be used once in the result set".

Idea: first see how many elements are common in A and B, then use the *exactly* one switch appropriately

**/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,temp;
    cin >> n;
    vector<int> Amap(1002,0);
    vector<int> Bmap(1002,0);
    //read A
    for(int i=0;i<n;i++){
        cin >> temp;
        Amap[temp]++;
    }
        //read B
    for(int i=0;i<n;i++){
        cin >> temp;
        Bmap[temp]++;
    }
    int ans = 0;
    for(int i=0;i<1002;i++){
        if(Amap[i]>0 && Bmap[i]>0){
            temp = min(Amap[i], Bmap[i]);
            ans += temp;
        }
    }
    
    //change exactly 1 : need to change even if all are matching elements, making one unmatch, hence reducing the ans
    if(ans<n){
        ans+=1;
    }else{
        ans-=1;
    }
 
    cout << ans;
    return 0;
}
