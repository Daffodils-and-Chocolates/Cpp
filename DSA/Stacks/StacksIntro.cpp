#include <iostream>
using namespace std;

class Stack{
public:
    struct st{
        int arr[100];
        int top = -1;
        int size = 0;
    }stack;
    bool isEmpty(){
        if(stack.top==-1)return true;
        else return false;
    }
    bool isFull(){
        if(stack.top==10)return true;
        else return false;
    }
    void push(int data){
        if(isFull()){
            cout<<"Stack is already full"<<endl;
            return;
        }
        stack.arr[++stack.top]= data;
        stack.size++;
    }
    void pop(){
        if(isEmpty()){
            cout<<"Cannot delete element! list is empty"<<endl;
            return;
        }
        --stack.top;
        --stack.size;
    }
    void printStack(){
        for(int i=0;i<stack.size;i++){
            cout<<stack.arr[i]<<" ";
        }
        cout<<endl;
    }
};

int main(){
    Stack st;
    st.push(5);
    st.push(8);
    st.push(4);
    st.pop();
    st.push(2);
    st.printStack();
    return 0; 
}