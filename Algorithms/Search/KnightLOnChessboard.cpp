#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    
    //https://stackoverflow.com/questions/13121469/initializing-a-vector-of-vectors-having-a-fixed-size-with-boost-assign
    /** to check if that works, before doing anything else
    vector<vector<int>> g(n, vector<int>(n,0));
    for(int i=0;i<g.size();i++){
                for(int j=0;j<g[0].size();j++){
                    cout << g[i][j] << " ";
                }cout << endl;
    }
    **/
    /**
    http://www.geeksforgeeks.org/breadth-first-traversal-for-a-graph/
    http://en.cppreference.com/w/cpp/container/queue

    **/
    
    // your code goes here
    for(int a=1;a<n;a++){
        for(int b=1;b<n;b++){ 
            //
            int x_dir[] = {+a,+a,-a,-a,+b,+b,-b,-b};
            int y_dir[] = {+b,-b,+b,-b,+a,-a,+a,-a};
            
            //now start from x=0,y=0
            vector<vector<int>> g(n, vector<int>(n,-1));
            g[0][0] = 0;
            
            queue<pair<int,int>> q;
            int next_x;
            int next_y;
            q.push(pair<int,int>(0,0));
            
            while(!q.empty()){
                pair<int,int> pp = q.front();q.pop();
                for(int k=0;k<8;k++){
                        next_x = pp.first + x_dir[k];
                        next_y = pp.second + y_dir[k];
                        if(next_x>=0 && next_x<n && next_y>=0 && next_y<n && g[next_x][next_y]==-1){ 
                            g[next_x][next_y] = 1 + g[pp.first][pp.second];
                            q.push(pair<int,int>(next_x,next_y));
                        }
                }
            }
            /**
            if(a==1 && b==4){
                cout << endl << "for a=1 b=4: " << endl;
            
                for(int i=0;i<n;i++){
                    for(int j=0;j<n;j++){
                        cout << g[i][j] << " ";
                    }cout<< endl;
                }
            }
            
            **/
           cout << g[n-1][n-1] << " "; 
        }cout << endl;
    }
    return 0;
}
