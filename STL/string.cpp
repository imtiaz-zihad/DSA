#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int solve()
{
    int n;
    cin >> n;
    string s;

    for (int i = 0; i < n; i++)
    {
        char c;
        cin >> c;
        s.push_back(c); // inserts character at the end of the string
    }
    cout << s << endl;
    s.pop_back(); // removes the last character from the string
    cout << s << endl;
    s.push_back('z'); // inserts 'z' at the end of the string
    cout << s << endl;
    
    cout << s.front() << " " << s.back() << endl; // first and last character
    cout << s.size() << endl; // size of the string
    cout << s.empty() << endl; // check if string is empty or not
    s.clear(); // clears the string
    cout << s.size() << endl; // size of the string after clearing

    string s1 ;
    cin >> s1;
    cout << s1.substr(1,3) << endl; // prints substring from index 1 of length 3
    cout << s1.substr(2) << endl; // prints substring from index 2 to end
     



    // https://docs.google.com/document/d/1ozYqG2JK-V1PbYb2ff1HIj3UAtcleb14EAu3AYXl1AE/edit?tab=t.0

    return 0;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}