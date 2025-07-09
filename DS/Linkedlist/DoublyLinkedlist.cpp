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

//Function to print the linked list in forward order
void print_forward(Node* head){
    Node* tmp = head;
    while(tmp  != NULL){
        cout<<tmp->val<< " ";
        tmp= tmp->next;
    }
    cout << endl;
}

//Function to print the linked list in backward order
void print_backward(Node* tail){
    Node* tmp = tail;
    while(tmp  != NULL){
        cout<<tmp->val<< " ";
        tmp= tmp->prev;
    }
    cout << endl;
}

int solve() {

    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* tail = new Node(30);


    head->next = a;
    a->prev = head;

    a->next = tail;
    tail->prev= a;

    print_forward(head);
    print_backward(tail);
   return 0;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
 