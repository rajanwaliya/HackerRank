#include <bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,m;
    cin >> n >> m;
    //g is the graph
    vector<vector<int>> g(n, vector<int>(m,0));
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> g[i][j];
        }
    }
    
    //b is to keep track of considered nodes
    vector<vector<bool>> b(n, vector<bool>(m,false));
    
    
    int ans = 0;
    //cout << g[0][0] << " and "<< b[0][0] << endl;
    
    //neighbors
    int dx[] = {+1,+1,-1,-1,0,0,+1,-1};
    int dy[] = {+1,-1,+1,-1,+1,-1,0,0};
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            
            if(g[i][j]==1 && !b[i][j]){
                //cout << "for "<<i << "," << j << endl;
                int temp = 0;
                queue<pair<int,int>> q;
                q.push(pair<int,int>(i,j));
                b[i][j] = true;
                int nx,ny;
                while(!q.empty()){
                    pair<int,int> tp = q.front(); q.pop();
                    temp++; //keeps count of elements ever added to the queue
                    for(int k=0;k<8;k++){
                        nx = tp.first+dx[k];
                        ny = tp.second+dy[k];
                        if(nx>=0&&nx<n && ny>=0&&ny<m && !b[nx][ny] && g[nx][ny]==1){
                            q.push(pair<int,int>(nx,ny));
                            b[nx][ny] = true;
                        }
                    }
                }
                
                ans = max(temp,ans);
                
            }
        }
    }
    cout << ans;
    
    return 0;
}
