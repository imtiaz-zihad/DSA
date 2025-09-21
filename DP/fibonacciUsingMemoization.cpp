#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

// time complexity: O(n)
// space complexity: O(n) + O(n) (recursion stack space + dp array space)
int dp[1005];
int fib(int n){
    if(n>2)
        return n;
    if(dp[n] != -1)
        return dp[n];
    dp[n] = fib(n-1) + fib(n-2);
    return dp[n];
}

int solve() {
    memset(dp,-1,sizeof(dp));
    int n;
    cin >> n;
    cout << fib(n) << " ";
    return 0;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}
