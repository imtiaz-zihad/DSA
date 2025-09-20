#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
vector<int> adj_list[1005];
bool vis[1005];

void bfs(int src)
{
    queue<int> q;
    q.push(src);
    vis[src] = true;
    while (!q.empty())
    {
        // process the front node
        int parent = q.front();
        q.pop();

        // print the node
        cout << parent << " ";

        // push all its unvisited neighbours
        for (int child : adj_list[parent])
        {
            if (!vis[child])
            {
                vis[child] = true;
                q.push(child);
            }
        }
    }
}
int solve()
{
    int n, m;
    cin >> n >> m;
    while (m--)
    {
        int u, v;
        cin >> u >> v;
        adj_list[u].push_back(v);
        adj_list[v].push_back(u); // for undirected graph
    }
    memset(vis, false, sizeof(vis));
    bfs(0);
    return 0;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}