#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool isKarpekar(long a){
    long b = a*a;
    string sa = to_string(a);
    string sb = to_string(b);
    long right = stol("0"+sb.substr(sb.size()-sa.size(),sb.size()));
    
    long left = stol("0"+sb.substr(0,sb.size()-sa.size()));
    //cout << sa << " " << sb << ", "<< left << ": "<< right<< endl;
    return left+right == a;
}

int main() {
    long p,q;
    cin >> p >> q;
    int ans = 0;
    for(long i=p;i<=q;i++){
        if(isKarpekar(i)){
            ans++;
            cout << i << " ";
        }
    }
    if(ans==0){
        cout << "INVALID RANGE";
    }
    return 0;
}
