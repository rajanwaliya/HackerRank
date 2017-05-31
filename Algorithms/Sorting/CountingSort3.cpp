#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin >> n;
    vector<int> c(101);
    string s;
    int temp;
    for(int i=0;i<n;i++){
        cin >> temp >> s;
        c[temp]++;
    }
    int count = 0;
    for(int i=0;i<100;i++){
        if(c[i]!=0){ //this conditional check is useless, in case of c[i] == 0, adding it to count won't matter.
            count+=c[i];
        }
        cout << count << " ";
    }
    return 0;
}
