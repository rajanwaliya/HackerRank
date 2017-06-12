#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

//helper function to print vector, also helpful while debuging the code
void print(vector<int> v){
    for(int i=0;i<v.size();i++){
        cout << v[i] << " ";
    }cout << endl;
}

int main() {
    int n,k;
    cin >> n >> k;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin >> v[i];
    }
    //see if we can switch ith element?
    int switches = 0; //this can go upto k
    for(int i=0;i<n && switches<k;i++){
        int cur = v[i];
        int maxi = n+1;
        int maxe = -1; 
        for(int j=n-1;j>i;j--){ //looking for rightmost and greatest element greater than cur
            if(v[j]>maxe){maxe = v[j];maxi = j;} // why not v[j]>=maxe ? that will give leftmost of the greatest ele
        }
        if(maxe>v[i]){
            switches++;
            swap(v[i],v[maxi]); //built-in swap for vector 
        }
    }
    print(v);
    return 0;
}
