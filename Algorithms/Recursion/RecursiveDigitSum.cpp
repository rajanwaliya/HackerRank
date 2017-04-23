#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int getSuperDigit(string k){
    int ans = 0;
    for(int i=0;i<k.size();i++){
        ans += k[i] - '0';
    }
    if(ans>9){
       ans = getSuperDigit(to_string(ans));
    }
    return ans;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    string n;
    int k;
    cin >> n;
    cin >> k;
    int n1 = getSuperDigit(n);
    int n2 = k*n1;
    while(n2>9){
        n2 = getSuperDigit(to_string(n2));
    }
    cout << n2;
    return 0;
}
