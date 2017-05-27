#include <bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,m;
    cin >> n >> m;
    vector<string> v;
    string s;
    for(int i=0;i<n;i++){
        cin >> s;
        v.push_back(s);
    }
    int cnt = 0;
    int val = -1;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int cur_val = 0;
            for(int k=0;k<m;k++){
                if(v[i][k]=='1'||v[j][k]=='1'){
                    cur_val++;
                }
            }
            //if the order of if blocks changes, I'll need to set cnt=0 instead of 1
            if(cur_val==val){
                cnt++;
            }
            if(cur_val>val){
                val = cur_val;
                cnt = 1;
            }
            
        }
    }
    cout << val << endl << cnt << endl;
    return 0;
}
