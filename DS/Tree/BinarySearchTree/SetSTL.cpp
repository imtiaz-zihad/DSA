#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int solve(){
   set<int> s;
   int n;
    cout << "Enter number of elements to insert in set: ";
    cin >> n;
    while (n--) {
        int x;
        cout << "Enter element: ";
        cin >> x;
        s.insert(x);
    }
    for(auto it = s.begin(); it != s.end(); it++)
    {
        cout << *it << " ";
    }
    if(s.count(5)){
        cout << "\n5 is present in the set" << endl;
    } else {
        cout << "\n5 is not present in the set" << endl;
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
