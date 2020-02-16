its a DIRECT DFS problem..

#include<bits/stdc++.h>
using namespace std;
#define sz 100000
#define sz1 1005
vector<int>adj[sz];
vector<int> people;
int ct[sz1];
int vis[sz1];
void clear()
{
	people.clear();
	for(int i = 0; i < sz; i++) adj[i].clear();
		memset(ct, 0, sizeof ct);
		memset(vis, 0, sizeof vis);
}
void dfs(int start)
{
	if(vis[start]) return;
	vis[start] = 1;
	ct[start]++;
	for(int i = 0; i < adj[start].size(); i++)
	{
			dfs( adj[start][i] );	
	}
}
int main()
{
	int t, cs = 0;
	scanf("%d", &t);
	while(t--){
		clear();
		int k, n, m, city, x, y, cnt = 0;
		scanf("%d %d %d", &k, &n, &m);
		for(int i = 0; i < k; i++)
		{
			scanf("%d", &city);
			people.push_back(city);
		}
		for(int i = 0; i < m; i++)
		{
			scanf("%d %d", &x, &y);
			adj[x].push_back(y);
		}

		for(int i = 0; i < people.size(); i++)
		{
			dfs(people[i]);
			memset(vis, 0, sizeof vis);
				
		}

		for(int i = 1; i <= n; i++)
		{
			//cout<<people[i]<<endl;
			if(ct[i] >= k)
				cnt++;
		}

		printf("Case %d: %d\n", ++cs, cnt);
	}

	return 0;
}
