#include <bits/stdc++.h>
using namespace std;

string nextPermutation(string s){
    //cout << "for this stirng: " << s << endl;
    int x=-1,y=-1;
    int n = s.size();
    //step1: find rightmost x such that s[x]<s[x+1]
    for(int i=0;i<n-1;i++){
        if(s[i]<s[i+1]){
            x = i;
        }
    }
    if(x==-1){
        return "no answer";
    }
    
    //step2: find rightmost y such that s[x]<s[y]
    for(int i=x+1;i<n;i++){
        if(s[x]<s[i]){
            y = i;
        }
    }
    //cout << "found x:" << x << "and y:" << y << endl;
   // if(y==-1){ return "no answer";   }
    //step3: swap s[x] and s[y]
    char temp = s[x];
    s[x] = s[y];
    s[y] = temp;
    //step4: reverse x+1 to n
    string subs = s.substr(x+1);
   // cout << "substring " << subs <<endl;
    
    reverse(subs.begin(),subs.end());
   // cout << "reversed substring " << subs <<endl;
    
    
    return s.substr(0,x+1)+subs;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin >> t;
    while(t-->0){
        string s;
        cin >> s;
        cout << nextPermutation(s) << endl;
        
    }
    return 0;
}

