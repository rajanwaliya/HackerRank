#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int R,C,r,c;

bool find2D(vector<string> s, vector<string> p){
    bool found = false;
    for(int i=0;i<R-r+1;i++){
        for(int j=0;j<C-c+1;j++){
            found = true;
            for(int i1=0;i1<r && found;i1++){ // no need to keep looking further after one mismatch
                for(int j1=0;j1<c && found;j1++){ //same as above comment, will just waste time
                    if(s[i+i1][j+j1]!=p[i1][j1]){
                        found = false;
                    }   
                }
            }
            if(found){
                return true;
            }
        }
    }
    return false;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    string temp;
    cin >> t;
    while(t-->0){
        cin >> R >> C;
        //** No need to make G vector<vector<int>>
        vector<string> G;
        for(int i=0;i<R;i++){
            cin >> temp;
            G.push_back(temp);
        }
        cin >> r >> c;
        vector<string> g;
        for(int i=0;i<r;i++){
            cin >> temp;
            g.push_back(temp);
        }
        if(find2D(G,g)){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    return 0;
}

