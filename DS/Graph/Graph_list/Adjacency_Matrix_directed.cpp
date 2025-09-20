#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int solve()
{
   int n, e;
   cin >> n >> e;
   int adj_mat [n][n];

   memset(adj_mat, 0, sizeof(adj_mat)); //  memset is a function which set the value of matrix

    for(int i=0;i<n;i++){
    for(int j= 0;j<n;j++){
        if(i==j)
        adj_mat[i][j]=1;
    }
   
   }

   for(int i = 0;i<e;i++){
    int a ,b;
    cin >> a >> b;

    adj_mat[a][b] = 1;
    // For directed graph, we do not add the reverse edge
   }

   for(int i=0;i<n;i++){
    for(int j= 0;j<n;j++){
        cout << adj_mat[i][j] << " ";
    }
    cout << endl;
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