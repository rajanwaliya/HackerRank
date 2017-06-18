#include <bits/stdc++.h>
using namespace std;

void print(vector<bool> v){
	for(int i=0;i<v.size();i++){
		cout << v[i] << ",";
	}cout << endl;
}

int main() {
	// your code goes here
	int t,n,m,x,y;
	cin >> t;
	while(t-->0){
		cin >> n >> m;
		vector<int> g[n]; //graph ie array of vectors g[i] is the vector containing indexes of i's neighbors
		for(int i=0;i<m;i++){
			cin >> x >> y;
			//add edge, bidirectional
			x--;
			y--;
			g[x].push_back(y);
			g[y].push_back(x);
		}
		
		//start bfs from first node
		vector<bool> visited(n,false);
		vector<int> cost(n,-1);
		
		queue<int> q;
		visited[0] = true;
		q.push(0);
		cost[0] = 0;
		
		while(!q.empty()){
			int node = q.front();
			q.pop();
			
			//push all it's unvisited neighbors to the q
			
			for(int i=0;i<g[node].size();i++){
				if(!visited[g[node][i]]){
					visited[g[node][i]] = true;
					q.push(g[node][i]);
					cost[g[node][i]] = 1  + cost[node];
				}
			}
		
		}
		
		//print(visited);
		
		cout << cost[n-1] << endl;
		
		
	}
	return 0;
}