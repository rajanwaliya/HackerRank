#include <bits/stdc++.h>

using namespace std;

string solve(vector < int > a){
    // Complete this function
    int n = a.size();
    vector<int> sum;
    sum.push_back(a[0]);
    for(int i=1;i<n;i++){
        sum.push_back(a[i]+sum[i-1]);
    }
    
    int total = sum[n-1];
    
    for(int i=0;i<n;i++){
        int first = (i>0)?sum[i-1]:0;
        int last = total-sum[i];
        if(first==last){
            //cout << "here we go for " << a[i] << endl;
            return "YES";
        }
    }
    
    return "NO";
    
}

int main() {
    int T;
    cin >> T;
    for(int a0 = 0; a0 < T; a0++){
        int n;
        cin >> n;
        vector<int> a(n);
        for(int a_i = 0; a_i < n; a_i++){
           cin >> a[a_i];
        }
        string result = solve(a);
        cout << result << endl;
    }
    return 0;
}
