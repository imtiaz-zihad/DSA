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

void reverse_linked_list(Node* head, Node* tail){
    for (Node *i = head,*j=tail; i!=j && i->prev !=j; i=i->next,j=j->prev){
        swap(i->val,j->val);
    }
    
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
        insert_at_tail(head,tail,val);
    }

  

    print_forward(head);
    reverse_linked_list(head,tail);
    print_forward(head);
    
   return 0;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
 