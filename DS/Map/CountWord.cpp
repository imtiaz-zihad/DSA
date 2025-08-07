#include <bits/stdc++.h>
using namespace std;
#define endl '\n'


// Testcas:  I love he love we love
//output : love : 3
int solve(){
    string s;
    getline(cin, s);
    stringstream ss(s);
    string word;

    map<string, int> mp;
    while(ss >> word){
        mp[word]++;
    }
    // Printing the word count
    for(auto it = mp.begin(); it != mp.end(); it++)
    {
        cout << it->first << " : " << it->second << endl;
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
