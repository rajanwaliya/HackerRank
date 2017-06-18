
#include <bits/stdc++.h>
using namespace std;
//since need to modify cc and vis hence using &
void dfs(int node, vector<int> g[], vector<int> &cc, vector<bool> &vis,int color){
    vis[node] = true;
    cc[node] = color;
    //for all its neighbours
    for(int i=0;i<g[node].size();i++){
        if(!vis[g[node][i]]){
            dfs(g[node][i], g, cc, vis, color);
        }
    }
}

int main() {
    int n,m;
    cin >> n >> m;
    vector<int> g[n];
    int u,v;
    //take inputs
    while(m-->0){
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    
    vector<bool> vis(n,false);
    
    vector<int> cc(n,-1); //contry code of ith node
    
    int countryCode = 0;
    
    for(int i=0;i<n;i++){
        if(!vis[i]){
            dfs(i,g,cc,vis,countryCode++);
        }
    }
    
    vector<int> fq(countryCode,0); //freq of each contry
    for(int i=0;i<n;i++){
        fq[cc[i]]++;
    }
    int ans = 0;
    
    for(int i=0;i<fq.size();i++){
        for(int j=i+1;j<fq.size();j++){
            ans+= fq[i]*fq[j];
        }
    }
    
    
    
    /**
    for(int i=0;i<fq.size();i++){
        ans = fq[i]*ans;
        cout << fq[i] << ",";
    }cout << endl;
    **/
    cout << ans;
    return 0;
}
