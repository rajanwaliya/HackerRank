#include <bits/stdc++.h>
using namespace std;


void printAns(set<int> a){
    for(auto i=a.begin();i!=a.end();i++){
        cout << *i << " ";
    }cout <<endl;
}


//idea: slight modification of bfs
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int t;
    cin >> t;
    while(t-->0){
        int n,a,b;
        cin >> n >> a >> b;
        
        //why set? try building a small tree for first example to see the cost of considering repeated
        set<int> f;
        set<int> s;
        int temp;
        int itr = 0;
        f.insert(0);
        while(itr<n){
            
            for(auto i=f.begin();i!=f.end();i++){
                temp = *i;
                s.insert(temp+a);
                s.insert(temp+b);
            }
            f.clear();
            itr++;
            if(itr==n-1){
            printAns(s);
            }
            
            for(auto i=s.begin();i!=s.end();i++){
                temp = *i;
                f.insert(temp+a);
                f.insert(temp+b);
            }
            s.clear();
            itr++;
            if(itr==n-1){
                printAns(f);
            }   
        }
     
    }
    
    return 0;
}
