#include <iostream>
#include <string.h>
using namespace std;

class Student{
    public:
        int id;
        string name;
    public:
        void getform(){
            cout<<"Enter Studnet ID\n";
            cin>>id;
            cout<<"Enter Student Name\n";
            // getline(cin,name);
            cin>>name;
        }
        void display(){
            cout<<"Sudent ID: "<<id<<"/nStudent Name: "<<name<<endl;
        }
};
class Course: public Student{
    public:
        string course;
        int fee;
    public:
        void getCourse(){
            cout<<"Enter course Name\n";
            getline(cin,course);
            cout<<"Enter fee\n";
            cin>>fee;
        }
        void display(){
            cout<<"Course: "<<course<<"\nfee: "<<fee<<endl;
        }
};

int main(){
    Course s1;
    s1.getform();
    s1.getCourse();
    s1.display();
    return 0; 
}