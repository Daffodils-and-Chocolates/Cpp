#include <iostream>
#include <string.h>
using namespace std;

int main(){
    int i =3;
    int *j = &i;
    int **k = &j;
    cout<<"Address of i = "<<&i<<endl;
    cout<<"Address of i = "<<j<<endl;
    cout<<"Address of i = "<<*k<<endl;
    cout<<"Address of j = "<<&j<<endl;
    cout<<"Address of j = "<<k<<endl;
    cout<<"Address of k = "<<&k<<endl;
    cout<<"value of k   = "<<k<<endl;
    cout<<"value of j   = "<<j<<endl;
    cout<<"value of i   = "<<i<<endl;
    cout<<"value of i   = "<<*j<<endl;
    cout<<"value of i   = "<<**k<<endl;
    cout<<"value of i   = "<<*(&i)<<endl;
    return 0; 
}