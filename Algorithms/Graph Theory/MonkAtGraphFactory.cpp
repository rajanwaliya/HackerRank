#include <bits/stdc++.h>
using namespace std;

/**
degree: number of edges touching a node, includes both outgoing and incoming

build a binary tree and find relation between number of nodes and degrees

sum_of_degrees = 2* (nodes - 1)
**/

int main()
{
    int n;
    cin >> n;
    int degrees = 0;
    int temp;
    for(int i=0;i<n;i++){
        cin >> temp;
        degrees += temp;
    }
    
    if(degrees == 2*(n-1)){
        cout << "Yes";
    }else{
        cout << "No";
    }
    //cout << "Hello World!" << endl;
    return 0;
}
