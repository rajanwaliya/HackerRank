#include <bits/stdc++.h>
using namespace std;

void dfs(vector<int> g[], stack<int> &st, int node, vector<bool> &vis){
	vis[node] = true;
	for(int i=0;i<g[node].size();i++){
		if(!vis[g[node][i]]){
			dfs(g,st,g[node][i],vis);
		}
	}
	st.push(node);
}

int main() {
	// your code goes here
	while(true){
		int n,m;
		cin >> n >> m;
		if(n==0 && m==0){break;}
		
		vector<int> g[n];
		int x,y;
		while(m-->0){
			cin >> x >> y;
			x--; y--; //we are following 0 based index, in question 1 based
			g[x].push_back(y);
		//	g[y].push_back(x); is a directed graph, only matters for directed graph
		}
		//find topological sort, using dfs
		vector<bool> vis(n,false);
		stack<int> stk;
		
		
		for(int i=0;i<n;i++){
			if(!vis[i]){
			dfs(g,stk,i,vis);}
		}
	//	cout << "finished dfs\n";
		while(!stk.empty()){
			cout << stk.top() +1<< " ";
			stk.pop();
		}
		cout << endl;
	}
	return 0;
}