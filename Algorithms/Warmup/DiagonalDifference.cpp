#include <bits/stdc++.h>
using namespace std;

int main() {
    /* to play with 2d array */   
    int n,temp;
    vector<vector<int>> matrix;
    
    cin >> n;
    for(int i=0;i<n;i++){
        vector<int> tempVec;
        for(int j=0;j<n;j++){
            cin >> temp;
            tempVec.push_back(temp);
        }
        matrix.push_back(tempVec);
    }
    int primD=0,secD=0;
    //first calculate primary diagonal sum
    for(int i=0;i<n;i++){
        primD += matrix[i][i];
    }
    for(int i=0;i<n;i++){
        secD += matrix[(n-1)-i][i];
    }
    cout << abs(primD - secD) << endl;
    return 0;
}
