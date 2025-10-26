#include <bits/stdc++.h>
using namespace std;
#define endl '\n'


// multiset stores only keys, no values
// multiset keeps elements in sorted order
// multiset allows duplicate elements
int solve()
{
    int n;
    cin >> n;

    multiset<int>ml;
    for(int i=0;i<=n;i++){
        int x;
        cin >> x;
        ml.insert(x); // O(logn)
    }

    for(auto value :ml)
        cout << value << " ";
    cout << endl;

    ml.erase(5); // removes all occurrences of 5, O(logn) + O(k) k is the number of occurrences of the key

    // auto it = ml.find(5); // O(logn)
    // if(it != ml.end()){
    //     cout << "5 is present in set" << endl;
    // } else {
    //     cout << "5 is not present in set" << endl;
    // }

    cout << "Count of 5 is " << ml.count(5) << endl; // O(logn) or O(logn + k) k is the number of occurrences of the key


    int n;
    cin >> n;
    auto it =ml.lower_bound(n); // O(logn)
    ml.erase(it); // erases only one occurrence of the key

    if(it != ml.end()){
        cout << "Lower bound of " << n << " is " << *it << endl;
    } else {
        cout << "Lower bound does not exist" << endl;
    }

    int m;
    cin >> m;
    auto it2 =ml.upper_bound(m); // O(logn)
    if(it2 != ml.end()){
        cout << "Upper bound of " << m << " is " << *it2 << endl;
    } else {
        cout << "Upper bound does not exist" << endl;
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