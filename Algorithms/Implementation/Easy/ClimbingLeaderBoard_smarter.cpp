#include <bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,m;
    long temp;
    cin >> n;
    
    //creating a mapping for rank -> score
    //ith index of lb (leaderboard) contains score required for that rank
    long last = -1;
    int rank = 0;
    vector<int> lb(n+1,0);
     //there is no 0th rank
    lb[0] = 1000000001; //lets call 0th rank for the max possible score + 1
    for(int i=0;i<n;i++){
        cin >> temp;

        if(last!=temp){
            rank++;
            last = temp;
            lb[rank] = last;
        }
        
        //no need to store all the scores in an array, the data we needed is stored in lb
    }
    
    //***now rank+1 is the last possible rank***
    cin >> m;
    vector<int> ans;
    int curRank = n+1;
    for(int i=0;i<m;i++){
        cin >> temp;
        //find rank for score==temp
        //smart way
        for(int j=curRank;j>0;j--){
            if(temp>=lb[j] && temp<lb[j-1]){
                curRank = j;
                ans.push_back(curRank);
                break;
            }
        }
        /**
        Naive way NxM
        for(int j=1;j<n+1;j++){
            if(temp>=lb[j]){
                cout << j << endl;
                ans.push_back(j);
                break;
            }
        }
        */        
        //no need to save all scores of Alice, since we already processed
        //a.push_back(temp);
        
    }
    
    for(int i=0;i<m;i++){
        cout << ans[i] << endl;
    }
    
    return 0;
}


