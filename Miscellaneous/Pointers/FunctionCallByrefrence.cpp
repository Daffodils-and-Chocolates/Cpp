#include <iostream>
#include <string.h>
using namespace std;
void areaPeri(int,float *,float* );

int main(){
    int radius;
    float perimeter,area;
    cout<<"Enter Radius"<<endl;
    cin >> radius;
    areaPeri(radius,&area,&perimeter);
    cout<<"Area of circle is : "<<area<<endl;
    cout<<"Perimeter of circle is : "<< perimeter;
    return 0; 
}
void areaPeri(int r,float *a,float *p){
    *a = 3.14 * r *r;
    *p = 2*3.14*r;
}