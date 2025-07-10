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
int solve() {

    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* tail = new Node(30);


    head->next = a;
    a->prev = head;

    a->next = tail;
    tail->prev= a;

    insert_at_head(head,5);
    insert_at_tail(head,tail,40);

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
 