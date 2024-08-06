#include<bits/stdc++.h>
using namespace std;

mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());

class Node{
public:
    int data;
    Node *left;
    Node *right;
};

class BinaryTree{
public:
    Node *root;

    BinaryTree(){
        root = nullptr;
    }

    Node *NewNode(int n){
        Node *newNode = new Node;
        newNode->data = n;
        newNode->left = nullptr;
        newNode->right = nullptr;
        return newNode;
    }

    void PreOrder(Node *temp){
        if(temp != nullptr){
            cout<<temp->data<<" ";
            PreOrder(temp->left);
            PreOrder(temp->right); 
        }

    }

    void InOrder(Node *temp){
        if(temp != nullptr){
            InOrder(temp->left);
            cout<<temp->data<<" ";
            InOrder(temp->right);
        }
    }

    void PostOrder(Node *temp){
        if(temp != nullptr){
            PostOrder(temp->left);
            PostOrder(temp->right);
            cout<<temp->data<<" ";
        }
    }
};

int main(){
    auto begin = std::chrono::high_resolution_clock::now();

    BinaryTree bt;
    bt.root = bt.NewNode(1);
    bt.root->left = bt.NewNode(2);
    bt.root->right = bt.NewNode(3);
    bt.root->left->left = bt.NewNode(4);
    bt.root->left->right = bt.NewNode(5);
    bt.root->right->left = bt.NewNode(6);
    bt.root->right->right = bt.NewNode(7);

    bt.PreOrder(bt.root);
    cout<<endl;
    bt.InOrder(bt.root);
    cout<<endl;
    bt.PostOrder(bt.root);

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    
    
    auto end = std::chrono::high_resolution_clock::now();
    auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
    cerr << "Time measured: " << elapsed.count() * 1e-9 << " seconds.\n"; 
    return 0;
}