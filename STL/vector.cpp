#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int solve()
{
    // int n;
    // cin >> n;

    // vector<int> v;
    // for (int i = 0; i < n; i++)
    // {
    //     int x;
    //     cin >> x;
    //     v.push_back(x);
    // }
    // v.pop_back(); // removes the last element
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << " ";
    // }

    // cout << v.front() << " " << v.back() << endl; // first and last element
    // cout << v.empty() << endl; // check if vector is empty or not
    // v.clear(); // clears the vector

    // int n;
    // cin >> n;
    // vector<int> v(n,5); // vector of size n with all elements as 5
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << " ";
    // }

    // int n;
    // cin >> n;
    // vector<int> v;
    // v.assign(n, 10); // assigns n elements with value 10
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << " ";
    // }

    int n;
    cin >> n;

    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    sort(v.begin(), v.end()); // sorts the vector
    sort(v.rbegin(), v.rend()); // sorts in descending order
    for(auto it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }

    reverse(v.begin(), v.end()); // reverses the vector
    auto mn = min_element(v.begin(), v.end()); // returns iterator to minimum element
    cout << *mn << endl;
    int minElementPosition = mn - v.begin(); // position of minimum element
    cout << minElementPosition << endl;
    auto mx = max_element(v.begin(), v.end()); // returns iterator to maximum element
    cout << *mx << endl;
    int maxElementPosition = mx - v.begin(); // position of maximum element
    cout << maxElementPosition << endl;
    
    // https://docs.google.com/document/d/1Nzt32FtQ0O2a240TvnpacheaAiQCLaDMrUBw1qFyVOI/edit?tab=t.0


    return 0;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}