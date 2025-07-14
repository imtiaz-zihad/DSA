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



// Function to print the linked list
void print_linked_list(Node* &head){
    Node* tmp = head;
    while(tmp !=NULL){
        cout <<tmp->val << endl;
        tmp = tmp->next;
    }
}

// Function to print the linked list in reverse order using recursion
void reverse_linked_list(Node* &head , Node* &tail,Node* tmp) {
    //base case
    if(tmp->next == NULL){
        head = tmp;
        return;
    }
    reverse_linked_list(head,tail,tmp->next);
    tmp->next->next = tmp;
    tmp->next = NULL;
    tail = tmp; // Update tail to the last node
}

int solve() {


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
    
    reverse_linked_list(head,tail,head);
    print_linked_list(head);
   return 0;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
 