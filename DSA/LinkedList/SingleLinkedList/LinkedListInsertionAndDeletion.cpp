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
        this->head = nullptr;
    }
    void InsertAtBeginning(int data){
        Node *newNode = new Node(data);
        newNode->next = head;
        head = newNode;
    }
    void InsertAtEnd(int data){
        Node *newNode = new Node(data);
        if(head == nullptr){
            head = newNode;
            return;
        }
        Node *temp = head;
        while(temp->next!=nullptr)temp=temp->next;
        temp->next = newNode;
    }
    int length(){
        Node *temp = head;
        int count = 1;
        while(temp->next!=nullptr){
            temp=temp->next;
            count++;
        }
        return count;
    }
    void deleteAtBeginning(){
        this->head = head->next;
    }
    void deleteAtEnd(){
        int n = length();
        Node *temp = head;
        while(--n>1){
            temp = temp->next;
        }
        temp->next = nullptr;
    }
    void deletekey(int key){
        int k = linearSearching(key);
        if(k==0)return;
        Node *temp = head;
        k--;
        while(--k)temp= temp->next;
        Node *temp2 = temp->next->next;
        temp->next = temp2;
    }
    int linearSearching(int key){
        Node *temp = head;
        for(int count=1;temp!=nullptr;temp = temp->next,count++){
            if(temp->data == key)return count;
        }
        return 0;
    }
    void display(){
        Node *temp = head;
        while(temp!=nullptr){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
};

int main(){
    //list entry from the end
        LinkedList list;
        int l;
        cout<<"Enter size of List: "<<endl;
        cin >> l;
        cout<<"Enter in List"<<endl;
        for(int i=0;i<l;i++){
            int e;
            cin >>e;
            list.InsertAtEnd(e);
        }
    list.display();
    cout<<"Enter Key you want to delete:"<<endl;
    int k;
    cin>>k;
    list.deletekey(k);
    list.display();
    return 0; 
}