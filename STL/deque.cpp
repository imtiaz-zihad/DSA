#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int solve()
{
    int n;
    cin >> n;
    deque<int> dq;
    for (int i = 0; i < n; i++)
    {
        int x;cin >> x;
        dq.push_back(x); // inserts element at the end
    }
    dq.push_front(8); // inserts element at the front ,time complexity O(1);
    dq.push_back(9); // inserts element at the end ,time complexity O(1);
    dq.pop_back();   // removes element from the end, time complexity O(1);
    dq.pop_front(); // removes element from the front, time complexity O(1);

    for (auto it = dq.begin(); it != dq.end(); it++)
    {
        cout << *it << " ";
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