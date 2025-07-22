#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

/**
 * q.push(val) -->Insert value in tail
 * q.pop() -->Delete value from first
 * q.front() -->Access the first element 
 * q.size()  -->Return the size
 * q.empty() --> Check is it empty or not 
 * q.back()   --> Access the last element 
 */

int solve() {
    queue<int> q;

   int n ;
  cin >> n;

  for(int i=0;i<n;i++){
    int x;
    cin >> x;
    q.push(x);
  }


  while(!q.empty()){
    cout << q.front() << endl;
    q.pop(); 
  }

   return 0;
}



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
 