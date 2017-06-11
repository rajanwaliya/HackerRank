#include<bits/stdc++.h>
using namespace std;


class order{
    public:
    int index;
    int time;
    
    //giving parameter names index and time didn't work, hence i and t
    order(int i,int t){
        index = i;
        time = t;
    }
};
//first sort by ascending time, if same time, then by ascending index
/**
hint: (1)if don't want to remember sign for ascending and desc, print after sorting, and flip the sign if not sorted
as desired
(2) if want to remember sign: after sorted in asending first<second hence o1.time < o2.time
**/
bool compare(order o1, order o2){
    if(o1.time!=o2.time){
        return o1.time < o2.time;
    }
    return o1.index < o2.index;
}


int main() {
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
