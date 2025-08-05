#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int val;
    cin >> val;
    v.push_back(val);
    int cur_idx = v.size() - 1;

    while (cur_idx != 0)
    {
        int par_idx = (cur_idx - 1) / 2; // Equation to calculate parent index from child index
        if (v[par_idx] > v[cur_idx])
            swap(v[par_idx], v[cur_idx]);
        else
            break;
        cur_idx = par_idx;
    }

    for (int x : v)
        cout << x << " ";
    cout << endl;

    return 0;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
