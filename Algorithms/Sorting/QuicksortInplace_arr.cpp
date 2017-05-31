#include <bits/stdc++.h>
using namespace std;


//built-in swap of stl doesn't accept pointers
void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

int partition(int a[],int low,int hi,int n){
    
    int i = low;
    for(int j=low;j<=hi-1;j++){
        if(a[j]<a[hi]){
            swap(&a[j],&a[i]);
            i++;
        }
    }
    swap(&a[i],&a[hi]);
    for(int i=0;i<n;i++){
        cout << a[i] << " ";
    }cout << endl;
    return i;
}


void qs(int a[], int low, int hi,int n){
    if(low<hi){
        int pi = partition(a,low,hi,n);
        qs(a,low,pi-1,n);
        qs(a,pi+1,hi,n);
    }
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin >> n;
    int v[n];
    for(int i=0;i<n;i++){
        cin >> v[i];
    }
    
    qs(v,0,n-1,n);
   
    return 0;
}
