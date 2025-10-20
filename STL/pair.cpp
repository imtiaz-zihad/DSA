#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int solve()
{
    int n;
    cin >> n;

    pair<string, int> students[n];
    for (int i = 0; i < n; i++)
    {
        cin >> students[i].first >> students[i].second;
    }

    for (int i = 0; i < n; i++)
    {
        cout << students[i].first << " " << students[i].second << endl;
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