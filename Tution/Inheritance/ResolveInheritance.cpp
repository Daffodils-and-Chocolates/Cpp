#include <iostream>
#include <string.h>
using namespace std;

class A{
    public:
        void func(){
            cout<<"This is Class A"<<endl;
        }
};

class B{
    public:
        void func(){
            cout<<"This is Class B"<<endl;
        }
};

class C : public A,public B{
};

int main(){
    C obj;
    obj.A::func();
    obj.B::func();
    return 0; 
}