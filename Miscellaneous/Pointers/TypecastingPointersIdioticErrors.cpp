#include <iostream>
#include <string.h>
using namespace std;

int main(){
    int i = 54;
    float a = 3.14;
    char *ii,*aa;
    ii = (char *)&i;
    aa = (char *)&a;
    cout<<"Address in ii = "<<ii<<endl;
    cout<<"Address of i  = "<<&i<<endl;
    cout<<"Address in aa = "<<aa<<endl;
    cout<<"Address of a  = "<<&a<<endl;
    cout<<"value in ii   = "<<*ii<<endl;
    cout<<"value in aa   = "<<*aa<<endl;
    return 0; 
}