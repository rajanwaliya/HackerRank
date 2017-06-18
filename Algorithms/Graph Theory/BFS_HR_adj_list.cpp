/** https://www.hackerrank.com/challenges/bfsshortreach. **/

#include <bits/stdc++.h>
using namespace std;
#define INF 0x3f3f3f3f

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int t;
    cin >> t;
    int n,m,s;
    
    while(t-->0){
        cin >> n >> m;
        vector<int> g[n];
        int u,v;
        
        while(m-->0){
            cin >> u >> v;
            u--; v--;
            g[u].push_back(v);
            g[v].push_back(u);
        }
        cin >> s;
        s--;
        vector<bool> vis(n,false);
        vector<int> dis(n,INF);
        dis[s] = 0;
        vis[s] = true;
        queue<int> q;
        q.push(s);
        int cur;
        while(!q.empty()){
            cur = q.front();
            q.pop();
            //for all it's neighbours
            for(int i=0;i<g[cur].size();i++){
                if(!vis[g[cur][i]]){
                    vis[g[cur][i]] = true;
                    dis[g[cur][i]] = 1+dis[cur];
                    q.push(g[cur][i]);
                }
            }
        } 
        
        for(int i=0;i<n;i++){
            if(i==s){continue;}
            if(dis[i]==INF){cout << "-1 ";}
            else{
                cout << 6*dis[i] << " ";
            }
        }cout << endl;
        
    }
    
    return 0;
}
