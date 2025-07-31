#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

class Node {
public: 
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

void preorder(Node* root){
    if(root == NULL)
        return;
    cout <<root->val << " ";
    preorder(root->left);  // left
    preorder(root->right); // right
}
void inorder(Node* root){
    if(root==NULL)
        return ;
    inorder(root->left);  // left
    cout <<root->val << " ";
    inorder(root->right); // right

}
void postorder(Node* root){
    if(root==NULL)
        return ;
    postorder(root->left);  // left
    postorder(root->right); // right
    cout <<root->val << " ";

}
int solve() {
    
    Node* root = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);
    Node* d = new Node(50);
    Node* e = new Node(60);

    root->left = a;
    root->right = b;
    a->left = c;
    b->left = d;
    b->right= e;


    preorder(root);
    inorder(root);
    postorder(root);
    return 0;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
