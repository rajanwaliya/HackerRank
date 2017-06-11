#include<bits/stdc++.h>
using namespace std;

class order{
    public:
    int index;
    int time;
    
    order(int i,int t){
        index = i;
        time = t;
    }
};

bool compare(order o1, order o2){
    if(o1.time!=o2.time){
        return o1.time < o2.time;
    }
    return o1.index < o2.index;
}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    cin >> n;
    vector<order> v;
    int tempt;
    int tempd;
    for(int i=0;i<n;i++){
        cin >> tempt >> tempd;
        v.push_back(order(i, tempd+tempt));
    }
    
    sort(v.begin(), v.end(), compare);
    
    for(int i=0;i<n;i++){
        cout << v[i].index+1 << " ";
    }
    
    
    
    return 0;
}
