#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

class mystack {
public: 
    vector<int>v;

    void push(int val){
        v.push_back(val);
    }
    void pop(){
        v.pop_back();
    }
    int top(){
        return v.back();
    }
    int size(){
        return v.size();
    }
    bool empty(){
        return v.empty();
    }
};

int solve() {
  
  mystack st;
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
 