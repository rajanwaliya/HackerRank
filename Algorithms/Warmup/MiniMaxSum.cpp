#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<long long int> vec;
    long long int temp;
    
    //first option
    long long int mini = 1000000000;
    long long int max = 0;
    long long sum = 0;
    
    
    for(int i=0;i<5;i++){
        cin >> temp;
        sum += temp;
        if (temp>max){
            max = temp;
        }
        if (temp< mini){
            mini = temp;
        }
        
        //second option
        vec.push_back(temp);
    }
    
    
    sort(vec.begin(),vec.end());
    long long int minAns=0;
    long long int maxAns=0;
    
    
    for(int i=0;i<4;i++){
        minAns += vec[i];
    }
    for(int i=1;i<5;i++){
        maxAns += vec[i];
    }
//    cout << (sum-max) << " " << (sum-mini) << endl;
    cout << minAns << " " << maxAns << endl;
    return 0;
}
