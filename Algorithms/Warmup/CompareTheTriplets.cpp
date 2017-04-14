#include <bits/stdc++.h>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    vector<int> a,b;
    int temp;
    for(int i=0;i<3;i++){
        cin >> temp;
        a.push_back(temp);
    }
    for(int i=0;i<3;i++){
        cin >> temp;
        b.push_back(temp);
    }
    int ansA=0,ansB=0;
    for(int i=0;i<3;i++){
        if(a[i]>b[i]){
            ansA++;
        }else if(a[i]<b[i]){
            ansB++;
        }
    }
    cout << ansA << " " << ansB;
    return 0;
}
