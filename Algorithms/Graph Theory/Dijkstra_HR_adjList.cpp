/** https://www.hackerrank.com/challenges/dijkstrashortreach **/

#include<bits/stdc++.h>
using namespace std;

# define INF 0x3f3f3f3f
typedef pair<int, int> ii;


int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        int m;
        cin >> n >> m;
        vector<ii> g[n]; //node, wieght
        for(int a1 = 0; a1 < m; a1++){
            int x;
            int y;
            int r;
            cin >> x >> y >> r;
            x--; y--;
            g[x].push_back(ii(y,r));
            g[y].push_back(ii(x,r));
        }
        int s;
        cin >> s;
        s--;
        priority_queue<ii> pq; //weight, node
        vector<int> dis(n,INF);
        dis[s] = 0;
        pq.push(ii(dis[s],s));
        int cNode,cDis,nNode,nW;
        
        while(!pq.empty()){
            cNode = pq.top().second;
            cDis = pq.top().first;
            //cout << "popped " << cNode << "dis is "<< cDis<<endl;
            pq.pop();
            //if(cDis!=dis[cNode]){continue;}
            
            for(int i=0;i<g[cNode].size();i++){
                nNode = g[cNode][i].first;
                nW = g[cNode][i].second; //don't do dis[nNode] it might be INF yet
                if(dis[nNode] > nW+cDis){
                    dis[nNode] = nW+cDis;
                    
                   // cout << "for neighbor "<<nNode<<" edge weight is "<< nW << endl;
                    pq.push(ii(dis[nNode],nNode));
                   // cout << "pushed "<< nNode << " for weight "<< dis[nNode] << endl;
                }
            }
        }
        
        for(int i=0;i<n;i++){
            if(i==s){continue;}
            if(dis[i]==INF){cout << "-1 ";}
            else{
            cout << dis[i] << " ";}
        }cout << endl;

    }
    return 0;
}
