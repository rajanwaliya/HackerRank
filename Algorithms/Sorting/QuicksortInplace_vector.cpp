#include <bits/stdc++.h>
using namespace std;

/**
Note: instead of using vector<int> &a to use the same vector<int> in all funciton calls
other way is to define vector<int> a as global variable, then no need to pass it 
with function call, since every function knows it.
See 'find the median' solution.
**/


void print(vector<int> a){
    for(int i=0;i<a.size();i++){
        cout << a[i] << " ";
    }cout << endl;
}


//need to use vector<int> '&'a instead of vector<int> a
void qs(vector<int> &a, int low, int hi){
    if(low<hi){
        int pi = low;    //position of pivot
        int pivot = a[hi];  //value of pivot
        //partition here itself
        for(int i=low;i<hi;i++){
            if(a[i]<pivot){
                swap(a[pi],a[i]);
                pi++;
            }
        }
        swap(a[pi],a[hi]);
        //now element at pi index (ie pivot) is at the right place
        
        print(a);
        qs(a,low,pi-1);
        qs(a,pi+1,hi);
    }
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin >> v[i];
    }
    
    qs(v,0,n-1);
   
    return 0;
}
