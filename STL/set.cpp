#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

// set stores only keys, no values
// set keeps elements in sorted order
// set does not allow duplicate elements

int solve()
{
    int n;
    cin >> n;

    set<int> s;
    for(int i=0;i<=n;i++){
        int x;
        cin >> x;
        s.insert(x); // O(logn)
    }

    for(auto value :s)
        cout << value << " ";
    cout << endl;

    // auto it = s.find(5); // O(logn)
    // if(it != s.end()){
    //     cout << "5 is present in set" << endl;
    // } else {
    //     cout << "5 is not present in set" << endl;
    // }

    int n;
    cin >> n;
    auto it =s.lower_bound(n); // O(logn)
    if(it != s.end()){
        cout << "Lower bound of " << n << " is " << *it << endl;
    } else {
        cout << "Lower bound does not exist" << endl;
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