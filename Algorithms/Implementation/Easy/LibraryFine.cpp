#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int calculateFine(int a[3], int d[3]){
    int ans = 0;
    //if before year
    if(a[2]<d[2]){
        return 0;
    }
    //same year
    else if(a[2]==d[2]){
        //before month
        if(a[1]<d[1]){return 0;}
        //same month
        else if(a[1]==d[1]){
            if(a[0]<=d[0]){return 0;}
            else{
                return 15*(a[0]-d[0]);
            }
        }
        //later month
        else{
            return 500*(a[1]-d[1]);
        }
    }
    //later year
    return 10000;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int actual[3];
    int due[3];
    for(int i=0;i<3;i++){
        cin >> actual[i];
    }
    for(int i=0;i<3;i++){
        cin >> due[i];
    }
    cout << calculateFine(actual, due) << endl;
    return 0;
}
