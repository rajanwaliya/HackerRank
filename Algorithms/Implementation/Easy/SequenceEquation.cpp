#include <bits/stdc++.h>
using namespace std;


int main() {
    int n,temp;
    int p[51];
    int ans[51];
    //Note that p[x] is not <=n, it is <51 independent of n, hence size of array should be 51
    cin >> n;
    //Notice the way to directy putting into array, instead of taking temp and then putting it
    for(int  i=1;i<n+1;i++){
        cin >> p[i];
    }
    for(int i=1;i<n+1;i++){
        ans[p[p[i]]] = i;
    }
    for(int i=1;i<n+1;i++){
        cout << ans[i] << endl;
    }
    return 0;
}
