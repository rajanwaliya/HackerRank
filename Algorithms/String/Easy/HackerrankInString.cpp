#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool found(string s,int si,string hr,int hi){
    //if(si>=s.size()){ //s ended
    //    return false;
    //}
    if(hi>=hr.size()){ //found hr before ending s or at the ending of s
        return true;
    }
    if(si>=s.size()){ //s ended
        return false;
    }
    
    
    //if required char in hr is found at si index in s
    if(s[si] == hr[hi]){
        //cout << "found " << hr[hi] << " at " << si << endl;
        return found(s,si+1,hr,hi+1); //look for next char in hr
    }else{
        return found(s,si+1,hr,hi); //look for sem char
    }
    
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int q;
    cin >> q;
    while(q-->0){
        string s;
        cin >> s;
        //if(found(s,s.size(),"hackerrank",10)){
        if(found(s,0,"hackerrank",0)){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    return 0;
}
