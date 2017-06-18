#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1000001;
vector<int> g[MAXN];
bool vis[MAXN];
int cv[MAXN];

void dfs(int i, int id){
	vis[i] = true;
	cv[i] = id;
	for(int j=0;j<g[i].size();j++){
		if(!vis[g[i][j]]){
			dfs(g[i][j], id);
		}
	}
}

int main() {
	// your code goes here
	int t,n,k;
	cin >> t;
	while(t-->0){
		cin >> n >> k;
		
		for(int i=0;i<n;i++){
			//since using the same global graph for all 't' graphs
			g[i].clear();
			vis[i] = false;
			cv[i] = -1;
		}
		
		vector<pair<int,int>> bad_edges;
		
		int x,y;
		string s;
		while(k-->0){
			cin >> x >> s >> y;
			if(s=="="){
				g[x].push_back(y);
				g[y].push_back(x);
			}else{
				bad_edges.push_back(make_pair(x,y));
			}
		}
		
		//crate componenent with some id
		for(int i=0;i<n;i++){
			if(!vis[i]){
				dfs(i, i);
			}
		}
		bool ans = true;
		for(int i=0;i<bad_edges.size();i++){
			int f = bad_edges[i].first;
			int s = bad_edges[i].second;
			if(cv[f] == cv[s]){
				ans = false;
				break;
			}
		}
		
		if(ans){
			cout << "YES" << endl;
		}else{
			cout << "NO" << endl;
		}
	}
	return 0;
}