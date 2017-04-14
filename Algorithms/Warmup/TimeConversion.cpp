#include <bits/stdc++.h>
using namespace std;

int main() {
    string time;
    cin >> time;
    int hour = (time[0]-'0')*10 + (time[1]-'0');
//    int min = (time[3] - '0')*10 + (time[4] - '0');
//    int sec = (time[6]-'0')*10 + (time[7]-'0');
    
    if(time[8]=='P' && hour!=12){
        hour += 12;
    }
    if(hour == 24){
        hour = 0;
    }
    if(time[8] == 'A' && hour==12){
        hour = 0;
    }
    
    if(hour<11){
        cout << "0";
    }
    cout << hour;
    for(int i=2;i<8;i++){
        cout << time[i];
    }
    
    return 0;
}
