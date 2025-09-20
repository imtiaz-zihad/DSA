// Print the shortest path from source to destination using BFS
// single source shortest path in an unweighted graph
// also print the path
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
vector<int> adj_list[1005];
bool vis[1005];
int level[1005];
int parent[1005];


void bfs(int src){
    queue<int> q;
    q.push(src);
    vis[src] = true;
    level[src] = 0;

    while(!q.empty()){
        int par = q.front();
        q.pop();

        for(int child : adj_list[par]){
            if(!vis[child]){
                vis[child] = true;
                q.push(child);
                level[child] = level[par] + 1;
                parent[child] =par;
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
    memset(parent,-1,sizeof(parent));

    int src, dest;
    cin >> src >> dest;
    bfs(src);
    vector<int> path;
    int node = dest;
    while(node != -1){
        path.push_back(node);
        node = parent[node];
    }
    reverse(path.begin(),path.end());
    for(int x: path){
        cout << x << " ";
    }
    return 0;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}