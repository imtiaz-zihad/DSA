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

void insert_at_head(Node* head,int val){
    Node* newnode = new Node(val);
    newnode-> next = head;
}


// Visual Connection of linked list

// Before insertion, the linked list looks like this:

/*
  head --> 0x1010
             |
             v
           +---------------------------+
           | 20 | next: 0x1020         |  <-- address: 0x1010
           +---------------------------+
                     |
                     v
           +---------------------------+
           | 10 | next: NULL           |  <-- address: 0x1020
           +---------------------------+
*/

// After insertion, the linked list looks like this:

/*
  head --> 0x1000
             |
             v
           +---------------------------+
           | 30 | next: 0x1010         |  <-- address: 0x1000
           +---------------------------+
                     |
                     v
           +---------------------------+
           | 20 | next: 0x1020         |  <-- address: 0x1010
           +---------------------------+
                     |
                     v
           +---------------------------+
           | 10 | next: NULL           |  <-- address: 0x1020
           +---------------------------+
*/


int solve() {

    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);


    head->next = a;
    a->next= b;

    insert_at_head(head,100);



   return 0;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
