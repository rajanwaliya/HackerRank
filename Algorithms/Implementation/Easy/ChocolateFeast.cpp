#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t,n,c,m;
    cin >> t;
    while(t-->0){
        cin >> n >> c >> m;
        //first time buys as many with the money he has
        int ans = n/c;
        //cout << "could initially buy: "<< ans << endl;
        int left_money = n%c; //is of no use though
        int w = ans; //w: number of wrappers from bought chocolates
        while(w>=m){
            int temp = w/m;
            //cout << "with wrappers: "<< temp << endl;
            w = w%m; //could not be traded
            w+= temp; //from the chocolates he got in this exchange
            ans += temp;
        }
        cout << ans << endl;
    }
    return 0;
}
