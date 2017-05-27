#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n; //number of days
    cin >> n;
    int got = 5; //is always 5, initially always given to 5 people
    int liked = 0;
    int ans = 0;
    for(int i=0;i<n;i++){
        liked = floor(got/2); //out of all who got, this many will like
        ans+= liked;  //increment the count of likes        
        got = liked*3; // each of one who liked, shares it with 3 more
    }
    cout << ans;
    return 0;
}
