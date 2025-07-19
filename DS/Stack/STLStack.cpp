#include <bits/stdc++.h>
using namespace std;

#define endl '\n'


int solve() {

  stack<int>st;
  

  int n ;
  cin >> n;

  for(int i=0;i<n;i++){
    int x;
    cin >> x;
    st.push(x);
  }


  while(!st.empty()){
    cout << st.top() << endl;
    st.pop(); 
  }



   return 0;
}



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
 