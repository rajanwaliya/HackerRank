#include <bits/stdc++.h>
using namespace std;

//given an int, finds if it is beautiful for provided k
int isB(int a, int k){
    //first: find the reversed int
    //there is no easy way to reverse an int, but there is predefined method to reverse a string
    //1. convert int to string
    string st = to_string(a);
    //2. reverse the string
    reverse(st.begin(),st.end());
    //3. convert back to int
    int b = stoi(st);
    //cout << "a is " << a << " b is " << b << endl;
    int diff = abs(a-b);
    //cout << "abs diff is " << diff << endl;
    
    //the final condition, needs to be divisible by k
    return (diff%k)==0;
}



int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int i,j,k;
    cin >> i >> j >> k;
    //for each int between i and j, check if it is beautiful, if yes: increment count
    int ans = 0;
    for(int p=i;p<j+1;p++){
        if(isB(p,k)){
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}
