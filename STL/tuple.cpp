#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int solve()
{
    int n;
    cin >> n;
    tuple<string, int, double> students[n];
    for (int i = 0; i < n; i++)
    {

        cin >> get<0>(students[i]) >> get<1>(students[i]) >> get<2>(students[i]);
    }
    for (int i = 0; i < n; i++)
    {
        cout << get<0>(students[i]) << " " << get<1>(students[i]) << " " << get<2>(students[i]) << endl;
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