#include <bits/stdc++.h>
using namespace std;

#define endl '\n'


class Node {
public: 
    int val;
    Node* next ;


    Node(int val){
        this->val=val;
        this->next =NULL;
    }
};

// Function to insert a new node at the head of the linked list
void insert_at_head(Node* &head,int val){
    Node* newnode = new Node(val);
    newnode-> next = head;
    head = newnode;
}
// Function to insert a new node at the tail of the linked list
void insert_at_tail(Node* &head,int val){
      Node *newnode = new Node(val);

      if (head == NULL)
      {
          head  = newnode;
          return;
      }
        Node* tmp = head;
        while(tmp->next !=NULL){
        tmp = tmp->next;
    }

    tmp->next = newnode;
}
// Function to insert a new node at the tail of the linked list(optimized version)
void insert_at_tail_optimised(Node* &head,Node* &tail,int val){
      Node *newnode = new Node(val);

      if (head == NULL)
      {
          head  = newnode;
          tail = newnode;
          return;
      }
        

    tail->next = newnode;
    tail = newnode;
}

//Function to insert a new node at any position in the linked list
void insert_at_any_pos(Node* &head,int idx,int val){
    Node* newnode= new Node(val);
    Node* tmp = head;
    for(int i=0;i<idx-1;i++){
        tmp = tmp->next;
    }
    newnode->next = tmp->next;
    tmp->next= newnode;
}

// Function to print the linked list
void print_linked_list(Node* &head){
    Node* tmp = head;
    while(tmp !=NULL){
        cout <<tmp->val << endl;
        tmp = tmp->next;
    }
}


int solve() {

    // Node* head = new Node(10);
    // Node* a = new Node(20);
    // Node* tail = new Node(30);
    Node* head = NULL;
    Node* tail = NULL;

    int val;
    while(true){
        cin >> val ;
        if(val == -1){
            break;
        }
        insert_at_tail_optimised(head,tail,val);
    }
    print_linked_list(head);


    // head->next = a;
    // a->next= tail;

    // insert_at_head(head,100);
    // insert_at_tail(head,50);
    // insert_at_tail_optimised(head,tail,60);
    // insert_at_any_pos(head,4,40);
    // print_linked_list(head);

   return 0;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
 