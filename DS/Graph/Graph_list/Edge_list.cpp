#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int solve()
{
       int n, m;
    cin >> n >> m;
    vector<pair<int, int>> edge_list;
    while (m--)
    {
        int u, v;
        cin >> u >> v;
        edge_list.push_back({u, v});
    }

    cout << "Edge List representation of the graph is as follows:\n";
    for (auto edge : edge_list)
    {
        cout << edge.first << " " << edge.second << "\n";
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