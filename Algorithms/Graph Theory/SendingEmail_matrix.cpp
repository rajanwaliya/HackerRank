#include <bits/stdc++.h>
using namespace std;

# define INF 0x3f3f3f3f

int main() {
	int N,n,m,s,t;
	cin  >> N;
	int cases = 0; //'case' is a keyword, used in switch-case
	while(N-->0){
		scanf("%d %d %d %d",&n,&m,&s,&t);
		vector<vector<int>> g(n, vector<int>(n,0));
		int x,y,z;
		while(m-->0){
			scanf("%d %d %d", &x, &y, &z);
			g[x][y] = z;
			g[y][x] = z;
		}
		//dijkstra's from src to target
		vector<int> dis(n,INF);
		dis[s] = 0;
		priority_queue<pair<int,int>> pq;
		pq.push(make_pair(dis[s],s)); //sorting based on first element, hence first ele is dis
		int curNode;
		int curDis;
		int nbNode;
		int nbW;
		while(!pq.empty()){
			curNode = pq.top().second;
			curDis = pq.top().first;
			pq.pop();
			
			if(dis[curNode]<curDis){
				continue;
			}
			for(int i=0;i<n;i++){
				if(g[curNode][i]==0){continue;}
				nbNode = i;
				nbW = g[curNode][i];
				//dis of neighbor < curNode dis + edge weight
				if(dis[nbNode] > dis[curNode] + nbW){
					dis[nbNode] = dis[curNode] + nbW;
					pq.push(make_pair(dis[curNode] + nbW,nbNode));
				}
			}
			//if(curNode==t){break;}
		}
		
		if(dis[t]!=INF){
            printf("Case #%d: %d\n",cases++,dis[t]);
        }else{
            printf("Case #%d: unreachable\n",cases++);
		}
		
	}
	return 0;
}