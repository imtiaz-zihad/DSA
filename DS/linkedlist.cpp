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
      }
        Node* tmp = head;
        while(tmp->next !=NULL){
        tmp = tmp->next;
    }

    tmp->next = newnode;
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

    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);


    head->next = a;
    a->next= b;

    insert_at_head(head,100);
    insert_at_tail(head,50);
    print_linked_list(head);



   return 0;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
