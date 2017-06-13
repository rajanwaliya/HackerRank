#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    stack <int> s;
    int q,opt,x,data;
    cin>>q;
    for(int i=0;i<q;i++){
        cin>>opt;
         if(opt == 1){
            cin>>x;
             if(s.empty()) s.push(x);
                else s.push(max(x,s.top()));
            }else 
             if(opt == 2){
            s.pop();
        }
        else if(opt == 3){
            if(s.top()){
                
            cout<<s.top()<<endl;
                }
        }
    }
    return 0;
}
