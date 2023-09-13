#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node* prev;
    Node* next;
    Node(int data){
        this->data = data;
        this->prev = nullptr;
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
        if(head == nullptr){
            head = newNode;
            return;
        }
        head->prev = newNode;
        newNode->next = head;
        head = newNode;
    }
    void InsertAtEnd(int data){
        Node* newNode = new Node(data);
        Node* temp = head;
        if(head == nullptr){
            InsertAtBeginning(data);
            return;
        }
        while(temp->next!=nullptr)temp = temp->next;
        temp->next = newNode;
        newNode->prev = temp;
    }
    void DeleteFromEnd(){
        Node* temp = head;
        while(temp->next->next!=nullptr)temp = temp-> next;
        temp->next->prev = nullptr;
        temp->next = nullptr;
    }
    void DeleteFromStart(){
        head = head->next;
        head->prev->next = nullptr;
        head->prev = nullptr;
    }
    void printList(){
        Node* temp = head;
        while(temp!=nullptr){
            cout<< temp->data <<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
};

int main(){
    LinkedList list;
    list.InsertAtEnd(13);
    list.InsertAtBeginning(5);
    list.InsertAtBeginning(7);
    list.InsertAtEnd(3);
    list.printList();
    list.DeleteFromStart();
    list.printList();
    return 0; 
}