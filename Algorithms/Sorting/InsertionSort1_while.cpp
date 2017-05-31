#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void print(vector<int> v){
    for(int i=0;i<v.size();i++){
        cout << v[i] << " ";
    }
    cout << endl;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin >> v[i];
    }
    
    int key = v[n-1];
    
    /**
    move all the elements in v[0...n-2] that are greater than key to one position right
    **/
    int j = n-2;
    while(j>=0 && v[j]>key){
        v[j+1] = v[j];
        j--;
        print(v);
    }
    //finally put j at its correct position
    v[j+1] = key;
    print(v);
    
    return 0;
}
