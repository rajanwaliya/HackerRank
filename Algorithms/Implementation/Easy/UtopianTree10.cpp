#include <bits/stdc++.h>
using namespace std;

//initial height is always 1
//this method finds height after n years(ie n cycles)
int findH(int n){
    int iniH = 1; //given, always 1
    for(int i=0;i<n;i++){//for each cycle
        if(i%2==0){ //grows double in first cycle
            iniH *= 2;}
        else{       // +1 in the nextÍ
            iniH += 1;}
    }
    return iniH;
}

int main() {
    int t,n;
    cin >> t;
    while(t-->0){
        cin >> n;
        cout << findH(n) << endl;
    }
    return 0;
}
