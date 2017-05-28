#include<bits/stdc++.h>
using namespace std;

int main() {
    stack<int> s;
    stack<int> maxS;
    int q;
    cin >> q;
    int maxe = -1;
    while(q-->0){
        int type;
        cin >> type;
        int ele;
        if(type==1){
            cin >> ele;
            maxe = max(maxe, ele);
            maxS.push(maxe);
            s.push(ele);
        }
        if(type==2){
            s.pop();
            maxS.pop();
            //** this is important, what if what was in maxe is not any more in the maxS stack?
            //maxe should stay updated
            if(maxS.size()==0){
                maxe = -1;
            }
            else{
                maxe = maxS.top();
            }
        }
        if(type==3){
            cout << maxS.top() << endl;
        }
    }
    return 0;
}
