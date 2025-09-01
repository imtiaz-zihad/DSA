#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int solve()
{
    int n, e;
    cin >> n >> e;
    vector<int> adj_list[n]; // Using vector to create an adjacency list
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        // For undirected graph, we add the reverse edge
        // This line is crucial for undirected graphs
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }
    for (int i = 0; i < n; i++)
    {
        cout << i << " -> ";
        for (int x : adj_list[i])
            cout << x << " ";
        cout << endl;
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
