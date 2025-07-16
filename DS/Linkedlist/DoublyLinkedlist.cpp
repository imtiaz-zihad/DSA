#include <bits/stdc++.h>
using namespace std;

#define endl '\n'


class Node {
public: 
    int val;
    Node* next ;
    Node* prev ;


    Node(int val){
        this->val=val;
        this->next =NULL;
        this->prev =NULL;
    }
};


// Function to print the doubly linked list in forward direction
void print_forward(Node* head){
    Node* tmp = head;
    while(tmp  != NULL){
        cout<<tmp->val<< " ";
        tmp= tmp->next;
    }
    cout << endl;
}


// Function to print the doubly linked list in backward direction
void print_backward(Node* tail){
    Node* tmp = tail;
    while(tmp  != NULL){
        cout<<tmp->val<< " ";
        tmp= tmp->prev;
    }
    cout << endl;
}


// Function to insert a new node at the head of the doubly linked list

void insert_at_head(Node* &head,int val){
    Node* newnode= new Node(val);

    newnode->next = head;
    head->prev = newnode;

    head =newnode;
}

// Function to insert a new node at the tail of the doubly linked list
void insert_at_tail(Node* &head,Node* &tail,int val){
    Node* newnode = new Node(val);

    if(head==NULL){
        head= newnode;
        tail = newnode;
        return;
    }
    tail->next=newnode;
    newnode->prev=tail;
    tail=newnode;
}

// Function to insert a new node at any position in the doubly linked list
void insert_at_any_pos(Node* &head,int idx,int val){
    Node* newnode = new Node(val);
    Node* tmp = head;
    for(int i=1;i<idx;i++){
        tmp= tmp->next; 
    }

    newnode->next =tmp->next;
    tmp->next->prev = newnode;

    tmp->next = newnode;
    newnode->prev = tmp->next;

}
// Function to delete a node at the head of the doubly linked list
void delete_at_head(Node* &head,Node* &tail){
    Node* deletenode = head;
    head= head->next;
    delete deletenode;

     if (head==NULL)
    {
        tail=NULL;
        return;
    }
    head->prev = NULL;

    
}

// Function to delete a node at the tail of the doubly linked list
void delete_at_tail(Node* &head,Node* &tail){
    Node* deletenode = tail;

    tail=tail->prev;
    delete deletenode;
    if(tail == NULL){
        head=NULL;
        return;
    }
    tail->next = NULL;
}
// Function to delete a node at any position in the doubly linked list
void delete_at_any_pos(Node* &head,int idx){
    Node* tmp = head;

    for (int i = 1; i < idx; i++)
    {
       tmp = tmp->next;
    }
    Node* deletenode = tmp->next;
    tmp->next =tmp->next->next;
    tmp->next->prev=tmp; 

    delete deletenode;
}
// Doubly linkedlist Asending order Sorting
void sort_linked_list(Node* head) {
    if (head == NULL || head->next == NULL) return;

    for (Node* i = head; i->next != NULL; i = i->next) {
        for (Node* j = i->next; j != NULL; j = j->next) {
            if (i->val > j->val) {
                swap(i->val, j->val);
            }
        }
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
        insert_at_tail(head,tail,val);
    }


    // head->next = a;
    // a->prev = head;

    // a->next = tail;
    // tail->prev= a;

    insert_at_head(head,5);
    insert_at_tail(head,tail,40);
    insert_at_any_pos(head,2,100);
    delete_at_head(head,tail);
    delete_at_tail(head,tail);
    delete_at_any_pos(head,1);

    print_forward(head);
    //print_backward(tail);
   return 0;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
 
