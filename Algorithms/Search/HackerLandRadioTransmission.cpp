#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    int n;
    int k;
    cin >> n >> k;
    vector<int> a(n);
    for(int i = 0;i < n;i++){
       cin >> a[i];
    }
    //do not assume that it is sorted
    sort(a.begin(), a.end());
    
    int j;
    int ans = 0;
    for(int i=0;i<n;i++){
        ans++;
        //find the righmost place to put the antenna, such that this a[i] is covered
        j = i;
        while(j<n && a[i]+k>=a[j]){
            j++;
        }
        //when the while loop terminates a[i]+k < a[j] so we place at the position j-1
        i = j - 1; //already incremented for that
        j = i;
        //now for the one ahead of this, ie on the right side of placed antenna
        while(j<n && a[i]+k>=a[j]){
            j++;
        }
        i = j-1; //till this value of i, everything is covered
    }        
    cout << ans;
    
    return 0;
}
