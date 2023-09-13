#include <iostream>
#include <string.h>
using namespace std;

class student{
    public:
    int rollNo;
    string stuName;
    void create(){
        cout<<"Enter Student name:\n";
        cin>>stuName;
        cout<<"Enter Student Roll No.:\n";
        cin>> rollNo;
    }
    void display(){
        cout<<rollNo << "\t" << stuName;
    }
};

int main(){
    student s1,s2,s3,s4;
    s1.rollNo=12;
    s2.create();
    s2.display();
    return 0; 
}