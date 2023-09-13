#include <iostream>
#include <string.h>
using namespace std;
class Stack{
public:
    struct st{
        int arr[100];
        int top =-1;
        int size=0;
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
            cout<<"Stack is Full"<<endl;
            return;
        }
        stack.arr[++stack.top]=data;
        stack.size++;
    }
    void pop(){
        if(isEmpty()){
            cout<<"Stack is empty!"<<endl;
            return;
        }
        --stack.top;
        --stack.size;
    }
    void display(){
        for(int i=0;i<stack.size;i++){
            cout<<stack.arr[i]<<" ";
        }
        cout<<endl;
    }
    float top(){
        return stack.arr[stack.size-1];
    }
};
int pow(int a, int b){
    int c=a;
    for(int i=2;i<=b;i++)c*=a;
    return c;
}
bool isOperator(char ch){
    if(ch == '+'|| ch == '-'|| ch == '*'|| ch == '/' || ch == '^') return true;
    else return false;
}
bool isOperand(char ch){
    if(ch>='0'&&ch<='9') return true;
    else return false;
}
float scanNum(char ch){
    return (float)ch - (float)'0';
}
float operation(int a, int b, char op){
    if(op=='+') return a+b;
    else if(op=='-') return b-a;
    else if(op=='*') return b*a;
    else if(op=='/') return b/a;
    else if(op=='^') return pow(b,a);
    else return INT_MIN;
}
float postfix(string str){
    Stack st1;
    for(int i=0;i<=str.length();i++){
        int a,b;
        char ch = str[i];
        if(isOperator(ch)){
            int a = st1.top();
            st1.pop();
            int b = st1.top();
            st1.pop();
            st1.push(operation(a,b,ch));
        }
        else if(isOperand(ch)){
            st1.push(scanNum(ch));
        }
    }
    return st1.top();
}
int main(){
    string str;
    cout<<"Enter postfix expression"<<endl;
    cin>>str;
    cout<<postfix(str);
    return 0; 
}