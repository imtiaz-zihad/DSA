#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

class mystack {
public: 
    list<int>l;

    void push(int val){
        l.push_back(val);
    }
    void pop(){
        l.pop_back();
    }
    int top(){
        return l.back();
    }
    int size(){
        return l.size();
    }
    bool empty(){
        return l.empty();
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
 