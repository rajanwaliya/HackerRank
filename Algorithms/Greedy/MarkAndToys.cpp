#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;



int main() 
{
    long long n, k; cin >> n >> k;
    vector<int> prices;
    for(int i = 0; i < n; i++)
    {
        int p; cin >> p;
        prices.push_back(p);
    }
    
    int answer = 0;
    
    // Write the code for computing the final answer using n,k,prices
    sort(prices.begin(), prices.end());
    //idea: pick the cheapest toys
    for(int i=0;i<n;i++){
        if(k>prices[i]){
            answer++;
            k-=prices[i];
        }else{
            break;
        }
    }
    
    cout << answer << endl;
    
    return 0;
}
