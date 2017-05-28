#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    int n1;
    int n2;
    int n3;
    cin >> n1 >> n2 >> n3;
    int he1 = 0,he2 = 0, he3= 0;
    vector<int> h1(n1);
    for(int h1_i = 0;h1_i < n1;h1_i++){
       cin >> h1[h1_i];
        he1+=h1[h1_i];
    }
    vector<int> h2(n2);
    for(int h2_i = 0;h2_i < n2;h2_i++){
       cin >> h2[h2_i];
        he2 += h2[h2_i];
    }
    vector<int> h3(n3);
    for(int h3_i = 0;h3_i < n3;h3_i++){
       cin >> h3[h3_i];
        he3+= h3[h3_i];
    }
    
    
    
    int i1 = 0,i2 = 0,i3 = 0;

    while(i1<n1 && i2<n2 && i3<n3){
        //whoever is higher remove top of if    (for higher, use or )
        //not need to be the highest (and condition in between)
        if(he1 > he2 || he1>he3){
            he1 -= h1[i1];
            i1++;
        }
        else if(he2>he1 || he2>he3){
            he2 -= h2[i2];
            i2++;
        }else if(he3>he1 || he3>he2){
            he3-= h3[i3];
            i3++;
        }else{
            //cout << he1 << " " << he2 << " " << he3 << endl;
            cout << he1 << endl;
            break;
        }
    }
    
    if(i1==n1 || i2 == n2 || i3 == n3){
        cout << '0' << endl;
    }
    
    
    
    return 0;
}
