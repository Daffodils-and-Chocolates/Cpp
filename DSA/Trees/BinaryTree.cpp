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
private:
    node* root;
public:
    BinaryTree(){
        root= nullptr;
    }
    void printInOrder(node* root){
        if(root == nullptr) return;
        printInOrder(root->left);
        cout<< root->data<<" ";
        printInOrder(root->right);
    }
};
int main(){
    node* root;
    return 0; 
}