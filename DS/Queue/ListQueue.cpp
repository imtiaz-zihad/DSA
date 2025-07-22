#include <bits/stdc++.h>
using namespace std;

#define endl '\n'


class myQueue{
public:
  list<int> l;
  void push(int val){ // O(1)
    l.push_back(val);
  }

  void pop(){ //O(1)
   l.pop_front();
  }
  int front(){ // O(1)
    return l.front();
  }
  int back(){ // O(1)
    return l.back();
  }
  int size(){
    return l.size();;
  }
  bool empty(){
    return l.empty();
  }

};

int solve() {

  myQueue q;;
  
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
 