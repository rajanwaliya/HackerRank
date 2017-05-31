#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void print(vector<int> v){
    for(int i=0;i<v.size();i++){
        cout << v[i]<< " ";
    }
    cout << endl;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int s;
    cin >> s;
    vector<int> v(s);
    for(int i=0;i<s;i++){
        cin>>v[i];
    }
    
    //insertion sort impl from: http://www.geeksforgeeks.org/insertion-sort/
    for(int i=1;i<s;i++){
        int key = v[i];
        int j = i-1;
        /* Move elements of arr[0..i-1], that are
          greater than key, to one position ahead
          of their current position */
        while(j>=0 && v[j]>key){
            v[j+1] = v[j];
            j--;
        }
        v[j+1] = key;
        print(v);
    }
    
    
    return 0;
}
