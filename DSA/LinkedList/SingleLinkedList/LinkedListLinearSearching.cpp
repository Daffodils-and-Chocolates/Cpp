#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node *next;

    Node(int data){
        this->data=data;
        this->next=nullptr;
    }
};
class LinkedList{
private:
    Node *head;
public:
    LinkedList(){
        head = nullptr;
    }
    void InsertAtTheBeginning(int data){
        Node *newNode = new Node(data);
        newNode->next = head;
        head = newNode;
    }
    void InsertAtTheEnd(int data){
        Node *newNode = new Node(data);
        if(head == nullptr){
            head = newNode;
            return;
        }
        Node *temp = head;
        while(temp->next!=nullptr)temp=temp->next;
        temp->next=newNode;
    }
    void LinearSearch(int key){
        Node *temp = head;
        for(int count =0 ; temp!=nullptr ; temp=temp->next,count++){
            if(temp->data==key){
                cout<<"Key Found at "<< count << "th index";
                return;
            }
        }
        cout<<"Key not found"<<endl;
    }
};

int main(){
    LinkedList list;
    int l;
    cout<<"Enter size of List: "<<endl;
    cin >> l;
    cout<<"Enter in List"<<endl;
    for(int i=0;i<l;i++){
        int e;
        cin >>e;
        list.InsertAtTheEnd(e);
    }
    cout<<"Enter element to Search"<<endl;
    int s;
    cin >> s;
    list.LinearSearch(s);
    return 0; 
}