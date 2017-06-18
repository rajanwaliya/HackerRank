#include <bits/stdc++.h>
using namespace std;

# define INF 0x3f3f3f3f

int main() {
	int N,n,m,s,t;
	cin  >> N;
	int cs = 0; //'case' is a keyword, used in switch-case
	while(N-->0){
		cs++;
		cin >>n >> m >> s >> t;
		vector<pair<int,int>> g[n];
		int x,y,z;
		while(m-->0){
			cin >> x >>y >> z;
			g[x].push_back(make_pair(y,z));
			g[y].push_back(make_pair(x,z));
		}
		
		//dijkstra's from src to target
		vector<int> dis(n,INF);
		dis[s] = 0;
		priority_queue<pair<int,int>> pq;
		pq.push(make_pair(dis[s],s));
		int curNode;
		int curDis;
		int nbNode;
		int nbW;
		while(!pq.empty()){
			curNode = pq.top().second;
			curDis = pq.top().first;
			if(dis[curNode]<curDis){
				continue;
			}
			pq.pop();
			for(int i=0;i<g[curNode].size();i++){
				nbNode = g[curNode][i].first;
				nbW = g[curNode][i].second;
				//dis of neighbor < curNode dis + edge weight
				if(dis[nbNode] > dis[curNode] + nbW){
					dis[nbNode] = dis[curNode] + nbW;
					pq.push(make_pair(dis[curNode] + nbW,nbNode));
				}
			}
			if(curNode==t){break;}
		}
		cout << "Case#" <<cs<<": ";
		if(dis[t]==INF){
			cout << "ureachable" << endl;
		}else{
			cout << dis[t] << endl;
		}
	}
	return 0;
}