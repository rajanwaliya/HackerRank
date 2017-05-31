#include<bits/stdc++.h>
using namespace std;

//Note: some wierd looking error messsage may come when you have number of argument mismatch in 
//declaration and call to a method
//for instance I was calling partition as : partition(left,right,k)


/**
First approach that should come to mind:
1. sort the vector using built-in sort(v.begin(),v.end())
2. return the n/2 th element from sorted vector
**/
vector<int> v;

int partition(int l, int r){
    int pivot = v[r];
    int j=l;
    for(int i=l;i<r;i++){
        if(v[i]<pivot){
            swap(v[i],v[j]);
            j++;
        }
    }
    swap(v[r],v[j]);
    return j;
}


int select(int left, int right, int k){
    for(;;){
        int ind = partition(left,right);
        
        if(k==ind){
            return v[k];
        }
        if(k>ind){ //search in right half
            left = ind+1; 
        }else{ //search in left half
            right = ind-1;
        }
    }
    
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin >> n;
    int k = n/2; //index of median element
    int temp;
    for(int i=0;i<n;i++){
        cin >> temp;
        v.push_back(temp);
    }
    
    
    cout << select(0,n-1,k);
    return 0;
}
