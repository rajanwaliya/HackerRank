#include <bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,p;
    cin >> n >> p;
    int k = (n%2==0)?n:n-1;
    int x = 0;
    int y = 0;
    while(p<k-2*x){
        x++;
    }
    while(p>2*y+1){
        y++;
    }
    cout << min(x,y);
    return 0;
}
