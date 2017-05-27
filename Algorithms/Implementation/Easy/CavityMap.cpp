#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

//make global for easy access from both main and isCavity method
int n;
vector<string> v;

bool isCavity(int i,int j){
    //if on the edges
    if(i==0||j==0||i==n-1||j==n-1){return false;}
    //if is neighbor of a cavity 
    if(v[i+1][j]=='X'||v[i-1][j]=='X'||v[i][j+1]=='X'||v[i][j-1]=='X'){return false;}
    //if any neighbor is deeper than this
    if(v[i+1][j]>=v[i][j]||v[i-1][j]>=v[i][j]||v[i][j+1]>=v[i][j]||v[i][j-1]>=v[i][j]){return false;}
    return true;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    cin >> n;
    string temp;
    for(int i=0;i<n;i++){
        cin >> temp;
        v.push_back(temp);
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(isCavity(i,j)){
                v[i][j]='X';
            }
        }
    }
    for(int i=0;i<n;i++){
        cout << v[i] << endl;
    }
    return 0;
}
