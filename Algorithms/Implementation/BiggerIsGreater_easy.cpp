#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin >> t;
    while(t-->0){
        string s;
        cin >> s;
        string s1 = s;
        if(next_permutation(s.begin(),s.end()) == false){
            cout << "no answer" << endl;
        }else{
            cout << s << endl;
        }
       
    }
    return 0;
}
