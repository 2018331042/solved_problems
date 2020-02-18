#include<bits/stdc++.h>
using namespace std;
#define sz 20005
#define sz1 100005
vector<int>adj[sz], temp;
int vis[sz];
char ch[sz];
int ans, lykan, vampire;
int bfs(int node)
{
	lykan = 0, vampire = 0;
	queue<int>q;
	q.push(node);
	vis[node] = 1;
	lykan++;
	ch[node] = 'L';
	while(!q.empty())
	{
		int p = q.front();
		q.pop();
		for(int i = 0; i < adj[p].size(); i++)
		{
			if(!vis[ adj[p][i] ])
			{
				vis[adj[p][i] ] = 1;
				q.push(adj[p][i]);
				if(ch[p] == 'L')
				{
					ch[ adj[p][i] ] = 'V';
					vampire++;
				}
				else{
					ch[ adj[p][i] ] = 'L';
					lykan++;
				}
			}
		}
	}

}

int main()
{
	int t, cs = 0;
	scanf("%d", &t);
	while(t--)
	{
		memset(vis, 0, sizeof vis);
		for(int i = 0; i < sz; i++) adj[i].clear();
		temp.clear();
		 ans = 0;
		int n;
		scanf("%d", &n);
		for(int i = 0; i < n; i++)
		{
			int u, v;
			scanf("%d %d", &u, &v);
			temp.push_back(u);
			temp.push_back(v);
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
		for(int i = 0; i < 2*n; i++){
			if(!vis[ temp[i] ] ){
				bfs(temp[i]);
				ans += max(lykan, vampire);
			}
		}
		//ans = max(lykan, vampire);
		printf("Case %d: %d\n", ++cs, ans);
	}
	return 0;
}
