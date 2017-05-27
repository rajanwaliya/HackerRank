
#include <bits/stdc++.h>
using namespace std;


int main() {
    int n,k;
    int E = 100;
    cin >> n >> k;
    int c[26];
    for(int i=0;i<n;i++){
        cin >> c[i];
    }
    int pos = 0;
    E-=1;
    if(c[0]==1){
        E-=2;
    }
    pos = (pos+k)%n;
    while(pos!=0){
        //cout << "pos is "<< pos << endl;
        if(c[pos]==1){
            E-=2;
        }
        E-=1;
        pos = (pos+k)%n;
    }
    cout << E;
    return 0;
}
