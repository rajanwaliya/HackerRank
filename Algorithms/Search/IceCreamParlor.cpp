#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class IceCream {
    
    public: 
        int flavor; 
        int index;
        //!!! need to complete this as well
        //always good to have different name, didn't work for argument with same name
        IceCream(int f, int i) {
            flavor = f;
            index = i;
       }
};
   
/**
binary search the icecream with flavour == search in the arr vector between index first and last
**/
int binarySearch(int first, int last, vector<IceCream> arr, int search) {
   while(first<=last){
       int med = first + (last-first)/2;
       if(arr[med].flavor==search){
           //mistake2: was returning med, instead of index of med
           return arr[med].index;
       }
       if(arr[med].flavor>search){//see in first half
           last = med-1;
       }else{//see in second half
           first = med+1;
       }
   }
    return -1;
}

//the compare function
//mistake 1: wrote wrong compare method,
//after printing before and after sorting, just needed to change comparison sign in first check
bool compare(IceCream a, IceCream b){
    if(a.flavor<b.flavor){
        return true;
    }
    return false;
}

int main() {
    int t;
    int n, m;
    cin >> t;
    for(int test = 0; test < t; test++) {       
        cin >> m >> n;
        vector<IceCream> arr;
        arr.reserve(n); 

        for (int i = 0; i < n; i++) {
            int cost;
            cin >> cost;
            arr.push_back(IceCream(cost, i + 1));
        }

        /**
        for(int i=0;i<n;i++){
            cout << arr[i].flavor << " ";
        }cout << endl;
        **/
        sort(arr.begin(), arr.end(), compare);
        
        //to verify if compare is correct, ie sorted in ascending order
        /**
        for(int i=0;i<n;i++){
            cout << arr[i].flavor << " ";
        }cout << endl;
        **/
        
        int firstIndex = 100000, secondIndex = 100000;
        
        for(int i = 0; i < n - 1 ; i++) {
            int search = m - arr[i].flavor;
            if(search >= arr[i].flavor) {
                int index = binarySearch( i + 1, n - 1, arr, search);
                if( index != -1 ) {
                    cout << min(arr[i].index, index) << " " << max(arr[i].index, index) << endl;
                    break;

                }
            }
        }

    }

}

