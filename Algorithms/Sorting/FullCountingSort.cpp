#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    cin >> n;
    vector<int> c(101);
    vector<string> s(101); //s[i] = string associated with int i
    int temp;
    string stemp;
    
    for(int i=0;i<n/2;i++){
        cin >> temp >> stemp;
        c[temp]++;
        //fot the 'twist'
        s[temp] += "-";
        s[temp] += " ";
    }
    for(int i=0;i<n/2;i++){
        cin  >> temp >> stemp;
        c[temp]++;
        s[temp] += stemp;
        s[temp] += " ";
    }
    
    //for(int i=0;i<100;i++){
       // cout << i <<" : "<< c[i]<<" : "<<s[i]<<endl;
    //}
    
    
    for(int i=0;i<100;i++){
        if(c[i]!=0){
        cout << s[i];
        }
    }
    
    return 0;
}
