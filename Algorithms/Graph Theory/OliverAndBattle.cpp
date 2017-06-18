#include <bits/stdc++.h>
using namespace std;

int mat[1002][1002];
bool v[1002][1002];
int n,m;

int runBFS(int a, int b){
	queue<pair<int,int>> q;
	q.push(pair<int,int>(a,b)); //method1 to create a pair
	v[a][b] = true;
	
	int nodeCount = 0;
	
	while(!q.empty()){
		nodeCount++;
		pair<int,int> node = q.front();
		q.pop();
		int curx = node.first;
		int cury = node.second;
		int x,y;
		
		for(int i=-1;i<=1;i++){
			for(int j=-1;j<=1;j++){
				x = curx + i;
				y = cury + j;
				if(x>=0 && x<n && y>=0 && y<m && !v[x][y] && mat[x][y]==1){
				    q.push(make_pair(x,y)); //method2 to create a pair
					//q.push(pair<int,int>(x,y));
					v[x][y] = true;
				}
			}
		}
	}
	return nodeCount;
	
	
}

int main() {
	// your code goes here
	int t;
	cin >>t;
	while(t-->0){
		cin >> n >> m;
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cin >> mat[i][j];
				v[i][j] = false;
			}
		}
		
		
		int ans = 0;
		int count = 0;
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				if(!v[i][j] && mat[i][j]==1){
					count++;
					//
					ans = max(ans, runBFS(i,j));
				}
			}
		}
		
		cout << count << " " << ans << endl;
		
	}
	return 0;
}