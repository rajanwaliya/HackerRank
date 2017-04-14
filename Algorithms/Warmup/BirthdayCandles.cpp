#include <bits/stdc++.h>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,count=0,temp;
    int max = 0; //always start max with 0 and min with MAX_INT (for int)
    vector<int> v;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> temp;
        v.push_back(temp);
        if(temp>max){
            max = temp;
        }  
    }
    for(int i=0;i<n;i++){
        if(v[i] == max){
            count++;
        }
    }
    cout << count << endl;
    return 0;
}
