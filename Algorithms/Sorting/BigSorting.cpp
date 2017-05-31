#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


/**
notice that if the decimal representation of number 'a' is longer than the decimal representation of number 'b' then  a>b. 
For numbers of the same length comparison result for numbers is the same as result of lexicographic comparison of strings
 with that numbers representations. 
 So we need to specify comparison function that sorts strings first by length and sorts strings of the same length 
 lexicographically. 
 After that, we need just input all numbers as strings, sort them using that comparison function and output them in sorted order. 

**/

int main() {
    int n;
    cin >> n;
    string s;
    vector<string> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end(),[](const string &left, const string &right){
        if(left.size()!=right.size()){
            return left.size() < right.size();
        }else{
            return left<right;
        }
    });
    for(int i=0;i<n;i++){
        cout << v[i] << endl;
    }
    return 0;
}
