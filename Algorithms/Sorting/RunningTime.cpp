#include <bits/stdc++.h>
using namespace std;


int main() {
    
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin >> v[i];
    }
    int ans = 0;
    for(int i=1;i<n;i++){
        int key = v[i];
        int j = i-1;
        while(j>=0 && v[j]>key){
            ans++; //shifting jth element to j+1 th position
            v[j+1] = v[j];
            j--;
        }
        v[j+1] = key;
    }
    cout << ans << endl;
    return 0;
}
