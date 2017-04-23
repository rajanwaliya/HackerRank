#include <bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,temp;
    cin >> n;
    vector<int> cnt(6,0); 
    
    //update cnt of each type, no need to store all n ints 
    for(int i=0;i<n;i++){
        cin >> temp;
        cnt[temp]++;
    }
    
    //now find max in cnt[1 to 5]
    int max = -1; 
    for(int i=1;i<cnt.size();i++){
        if(cnt[i]>max){
            max = cnt[i];
        }
    }
    
    //find the first index with value == max
    for(int i=1;i<cnt.size();i++){
        if(cnt[i]==max){
            cout << i << endl;
            break;
        }
    }
    
    return 0;
}
