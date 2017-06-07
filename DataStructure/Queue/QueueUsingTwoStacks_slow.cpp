//http://www.geeksforgeeks.org/queue-using-stacks/

#include <bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    
    //s1 is where you insert , s2 is where you take out from
    stack<int> s1;
    stack<int> s2;
    int t;
    cin >> t;
    int a,b;
    while(t-->0){
        cin >> a;
        if(a==1){
            //add element to the end of queue
            cin >> b;
            s1.push(b);
        }
        if(a==2){
            //remove element from the front of queue
            //move all elements from q1 to q2, then remove the top of q2, then push back in q1
            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop(); //note: pop doesnt return the element, silently removes it
            }
            s2.pop();
            while(!s2.empty()){
                s1.push(s2.top());
                s2.pop();
            }
        }
        if(a==3){
            //same as in case of a==2, just instead of removing top of q2, simply print it
            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop(); //note: pop doesnt return the element, silently removes it
            }
            cout << s2.top() << endl;
            while(!s2.empty()){
                s1.push(s2.top());
                s2.pop();
            }
        }
        
        
        
        
    }
    return 0;
}
