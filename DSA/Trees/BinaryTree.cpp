#include <iostream>
#include <string.h>
using namespace std;

class node{
public:
    int data;
    node* left;
    node* right;
    node(int data){
        this->data = data;
        left = nullptr;
        right = nullptr;
    }
};
class BinaryTree{
public:
    node* root;
    BinaryTree(){
        root= nullptr;
    }
    void insert(node* root,int data){
        if(root == nullptr) {
            root = new node(data);
            return;
        }
        if(root->left == nullptr){
            root->left = new node(data);
            return;
        }
        if(root->right == nullptr){
            root->right = new node(data);
            return;
        }
        insert(root->left ,data);
    }
    void InOrder(node* root){
        if(root == nullptr) return;
        InOrder(root->left);
        cout<< root->data<<" ";
        InOrder(root->right);
    }
    void PreOrder(node* root){
        if(root == nullptr) return;
        cout<< root->data<<" ";
        PreOrder(root->left);
        PreOrder(root->right);
    }
    void PostOrder(node* root){
        if(root == nullptr) return;
        PostOrder(root->left);
        PostOrder(root->right);
        cout<< root->data << " ";
    }
};
int main(){
    BinaryTree tree;
    tree.root = new node(1);
    tree.root->left = new node(2);
    tree.root->right = new node(3);
    tree.root->left->left = new node(4);
    tree.root->left->right = new node(5);
    tree.root->right->left = new node(6);
    tree.root->right->right = new node(7);
    cout<<"InOrder Traversal :"<<endl;
    tree.InOrder(tree.root);
    cout<<endl<<"PostOrder Traversal :"<<endl;
    tree.PostOrder(tree.root);
    cout<<endl<<"PreOrder Traversal :"<<endl;
    tree.PreOrder(tree.root);
    return 0; 
}