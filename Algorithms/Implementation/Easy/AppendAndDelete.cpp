#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool canConvert(string s, string t, int k){
    //if we have enough words to delete s, waste extra on empty string, and then 
    // add every char in t to it
    if(k>=s.size()+t.size()){
        return true;
    }
    
    int i=-1;
    
    for(i=0;i<min(s.size(),t.size());i++){
        if(s[i]!=t[i]){
            break;
        }
    }
    
    
    k-= (s.size()-i);//# of chars to be deleted
    k-= (t.size()-i);//# chars to be added
    
    //if we have some k left, we can spend it if it is even
    //keep adding and deleting something
    
    if(k<0 || k%2==1){
        return false;
    }
    return true;
    
}



int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    string s,t;
    int k;
    cin >> s >> t >>k;
    
    
    
    
    if(canConvert(s,t,k)){
        cout << "Yes";
    }else{
        cout << "No";
    }
    
    
    
    return 0;
}
