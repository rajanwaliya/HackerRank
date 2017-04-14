#include <bits/stdc++.h>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,temp;
    int pos=0,zero=0,neg=0;
    cin >> n;
    int total = n;
    while(n-->0){
        cin >> temp;
        if(temp==0){
            zero++;
        }
        else if(temp>0){
            pos++;
        }
        else{
            neg++;
        }
    }
    
    //need to typecase to float or multiply by 1.0
    cout << float(pos)/float(total) << endl << neg*1.0/total*1.0 << endl << float(zero)/float(total);
    
    return 0;
}
