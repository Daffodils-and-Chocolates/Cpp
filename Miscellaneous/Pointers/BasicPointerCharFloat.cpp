#include <iostream>
#include <string.h>
using namespace std;

int main(){
    char c , *cc;
    int i, *ii;
    float a , *aa;
    c = 'A';
    i = 54;
    a = 2.5;
    cc = &c;
    ii = &i;
    aa = &a;
    cout<<"Address in cc = "<<cc<<endl;
    cout<<"Address of c  = "<<&c<<endl;
    cout<<"Address in ii = "<<ii<<endl;
    cout<<"Address of i  = "<<&i<<endl;
    cout<<"Address in aa = "<<aa<<endl;
    cout<<"Address of a  = "<<&a<<endl;
    cout<<"Value of c    = "<<*cc<<endl;
    cout<<"Value of i    = "<<*ii<<endl;
    cout<<"Value of a    = "<<*aa<<endl;
    /*
    even though a float occupies 4 bytes in memory the address only shows the first byte
    address of first byte is known as base address
    but since they have been declared int or float pointers they will fetch the full value stored at the address
    */
    return 0; 
}