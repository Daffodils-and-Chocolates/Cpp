#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = nullptr;
    }
};
class LinkedList{
private:
    Node* head;
public:
    LinkedList(){
        this->head = nullptr;
    }
    void InsertAtBeginning(int data){
        Node* newNode = new Node(data);
        newNode->next = head;
        head = newNode;
    }
    void InsertAtEnd(int data){
        Node* newNode = new Node(data);
        if(head==nullptr){
            head= newNode;
            return;
        }
        Node* temp = head;
        while(temp->next!=nullptr)temp=temp->next;
        temp->next=newNode;
    }
    int lengthi(){//iterative approach
        Node* temp = head;
        int count = 1;
        while(temp!=nullptr){
            count++;
            temp=temp->next;
        }
        return count;
    }
    int length(){//length using recursion-part 1
        Node* temp = head;
        int count=1;
        return count+ length(temp->next);
    }
    int length(Node* temp){//length using recursion - part 2
        if(temp==nullptr)return 0;
        int count = 1;
        return count + length(temp->next);
    }
    int lengthT(){//tail recursive
        return lengthT(head, 0);
    }
    int lengthT(Node* temp,int count){
        if(temp == nullptr)return count;
        return lengthT(temp->next, ++count);
    }
    void printList(){
        Node* temp = head;
        while(temp!=nullptr){
            cout<< temp->data<<" ";
            temp = temp->next;
        }
    }
};

int main(){
    LinkedList list;
    list.InsertAtBeginning(3);
    list.InsertAtEnd(5);
    list.InsertAtEnd(7);
    list.printList();
    int n = list.lengthT();
    cout << endl<< n;
    return 0; 
}