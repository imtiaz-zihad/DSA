#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int solve()
{
    map<string, int> mp;
    // insert 1 value time complexity O(log n)
    // insert n values time complexity O(n log n)
    mp["apple"] = 1;
    mp["banana"] = 2;
    mp["cherry"] = 3;
    mp["date"] = 4;

    // printing the map time complexity O(n log n)
    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        cout << it->first << "  " << it->second << endl;
    }

    if(mp.count("banana")){
        cout << "banana is present in the map" << endl;
    } else {
        cout << "banana is not present in the map" << endl;
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
