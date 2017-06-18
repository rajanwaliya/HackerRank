#include <bits/stdc++.h>
using namespace std;

# define INF 0x3f3f3f3f
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;


int main() {
	int N,n,m,s,t;
	cin  >> N;
	int cases = 0; //'case' is a keyword, used in switch-case
	while(N-->0){
		scanf("%d %d %d %d",&n,&m,&s,&t);
		vector<pair<int,int>> g[n];
		int x,y,z;
		while(m-->0){
			scanf("%d %d %d", &x, &y, &z);
			g[x].push_back(ii(y,z));
			g[y].push_back(ii(x,z));
		}
		
		//dijkstra's from src to target
		vector<int> dis(n,INF);
		dis[s] = 0;
		priority_queue<ii, vector<ii>, greater<ii> > pq;
		pq.push(ii(dis[s],s));
		int curNode;
		int curDis;
		int nbNode;
		int nbW;
		while(!pq.empty()){
			curNode = pq.top().second;
			curDis = pq.top().first;
			pq.pop();
			
			if(dis[curNode]!=curDis){
				continue;
			}
			for(int i=0;i<g[curNode].size();i++){
				nbNode = g[curNode][i].second;
				nbW = g[curNode][i].first;
				//dis of neighbor < curNode dis + edge weight
				if(dis[nbNode] > dis[curNode] + nbW){
					dis[nbNode] = dis[curNode] + nbW;
					pq.push(ii(dis[curNode] + nbW,nbNode));
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