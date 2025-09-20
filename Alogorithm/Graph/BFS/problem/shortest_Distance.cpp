// single source shortest path in an unweighted graph

#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
vector<int> adj_list[1005];
bool vis[1005];
int level[1005];

void bfs(int src){
    queue<int> q;
    q.push(src);
    vis[src] = true;
    level[src] = 0;

    while(!q.empty()){
        int parent = q.front();
        q.pop();

        for(int child : adj_list[parent]){
            if(!vis[child]){
                vis[child] = true;
                q.push(child);
                level[child] = level[parent] + 1;
            }
        }
    }
}
int solve()
{
    int n,m;
    cin >> n >> m;
    while(m--)
    {
        int u, v;
        cin >> u >> v;
        adj_list[u].push_back(v);
        adj_list[v].push_back(u); // for undirected graph
    }
    memset(vis, false, sizeof(vis));
    memset(level, -1, sizeof(level));
    int src, dest;
    cin >> src >> dest;
    bfs(src);
    cout << level[dest];
    return 0;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}