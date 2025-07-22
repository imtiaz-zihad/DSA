#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

class Node{
public:
  int val;
  Node* next;
  Node* prev;

  Node(int val){
    this->val= val;
    this->next= NULL;
    this->prev= NULL;
  }
};

class myQueue{
public:
  Node* head = NULL;
  Node* tail = NULL;

  int sz= 0;

  void push(int val){ // O(1)
    Node* newnode = new Node(val);
    sz++;

    if(head==NULL){//corner Case
      head = newnode;
      tail = newnode;

      return;
    }

    tail->next = newnode;
    newnode->prev = tail;
    tail = newnode;
  }

  void pop(){ //O(1)
    sz--;
    Node* deleteNode = head;
    head= head->next;
    delete deleteNode;

    if(head == NULL){ //corner Case
      tail=NULL;
    }
    head->prev = NULL;
  }
  int front(){ // O(1)
    return head->val;
  }
  int back(){ // O(1)
    return tail->val;
  }
  int size(){
    return sz;
  }
  bool empty(){
    return head == NULL;
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
 