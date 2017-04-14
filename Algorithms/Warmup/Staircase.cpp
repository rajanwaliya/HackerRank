#include <bits/stdc++.h>
using namespace std;


int main() {
    int n;
    cin >> n;
    for(int i=1;i<=n;i++){
        string temp = "";
        for(int bl=0;bl<n-i;bl++){
            temp += " ";
        }
        for(int has=0;has<i;has++){
            temp += "#";
        }
        cout << temp << endl;
    }
    return 0;
}
