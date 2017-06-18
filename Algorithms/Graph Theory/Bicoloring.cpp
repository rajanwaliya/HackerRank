#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n,l;
	int x,y;
	while(true){
		cin >> n;
		if(n==0){break;}
		cin >> l;
		vector<int> g[n];
		while(l-->0){
			cin >> x >> y;
			//bidirectional or undirected graph
			//is using 0 based index, so no need to reduce x and y
			g[x].push_back(y);
			g[y].push_back(x);
		}
		
		vector<int> color(n,-1); //vector of n size, all elements -1
		
		bool isBipartite = true;
		
		//start the bfs from 0th node
		queue<int> q;
		q.push(0);
		color[0] = 1;
		//color also works as visited -1 means not visited
		int cur;
		
		while(!q.empty() && isBipartite){
		
			cur = q.front();
			q.pop();
			//for all it's neighbours
			for(int i=0;i<g[cur].size();i++){
				
				if(color[g[cur][i]]==-1){//unvisited node
					color[g[cur][i]] = 1 - color[cur]; //nice trick to switch 0 and 1
					q.push(g[cur][i]);
				}
				else if(color[g[cur][i]]==color[cur]){
					isBipartite = false;
					break;
				}
			}
		}
		
		if(isBipartite){
			cout << "BICOLORABLE." << endl;
		}else{
			cout << "NOT BICOLORABLE." << endl;
		}
	}
	return 0;
}