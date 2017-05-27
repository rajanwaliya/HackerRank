#include <bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int t;
    cin >> t;
    while(t-->0){
        int n,a,b;
        cin >> n >> a >> b;
        n--;
        int f = min(a,b);
        int s = max(a,b);
        set<int> ans;
        for(int i=0;i<=n;i++){
            ans.insert((n-i)*f+(i)*s);
        }
        for(auto i=ans.begin();i!=ans.end();i++){
            cout << *i << " ";
        }
        cout << endl;
     
    }
    
    return 0;
}
