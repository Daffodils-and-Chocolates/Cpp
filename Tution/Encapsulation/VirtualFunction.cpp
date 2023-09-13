#include <iostream>
using namespace std;

class abc{
    int a = 10;
    public:
        void disp(){
            cout<<"a is "<<a;
        }
};

class bb:public abc{
    int b =20;
    public:
        void disp(){
            cout<<"b is "<<b;
        }
};

int main(){
    abc* obj;
    bb ob;
    obj = &ob;
    obj->disp();
    return 0; 
}