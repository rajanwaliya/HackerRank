#include <bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    sort(a,a+n);
    int i=0;
    for(;i<n;i++){
        if(a[i]!=0){
            cout << (n-i) << endl;
            int temp = a[i];
            for(int j=i;j<n;j++){
                //a[j]-=a[i]; why not? a[i] became zero after first iteration
                a[j] -= temp;
            }
            //cout << "now a is "<< endl;
            //for(int k=0;k<n;k++){
            //    cout << a[k] << " ";
            //}cout << endl;
        }
    }
    return 0;
}
