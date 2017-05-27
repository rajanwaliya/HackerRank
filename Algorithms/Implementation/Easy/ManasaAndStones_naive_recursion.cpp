#include <bits/stdc++.h>
using namespace std;

//why global?
//vector<int> ans; 
set<int> ans;

void guessNext(int i,int a, int b, int sum, int n){
    //cout << "at "<<i << " with sum= "<<sum << endl;
    if(i==n-1){
        ans.insert(sum);
        return;
    }
    //for normal case
    //option 1: add 'a'
    guessNext(i+1,a,b,sum+a,n);
    //option 2: add 'b'
    guessNext(i+1,a,b,sum+b,n);
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int t;
    cin >> t;
    while(t-->0){
        int n,a,b;
        cin >> n >> a >> b;
        guessNext(0,a,b,0,n);
        for(auto i=ans.begin();i!=ans.end();i++){
            cout << *i << " ";
        }cout << endl;
        ans.clear();
    }
    
    return 0;
}
