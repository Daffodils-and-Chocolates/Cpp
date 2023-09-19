#include <iostream>
using namespace std;

int main(){
    float n,v;
    char d;
    cout << "Enter number and then f/c" <<endl;
    cin >> n >> d;
    if (d =='F'||d =='f'){
        v = (n-32)*(5.0/9);
        cout << n << "F" << " : " << v << "C";

    }
    else if (d =='c'||d =='C'){
        v = ((9.0/5)*n) + 32;
        cout << n <<"C"<< " : " << v << "F";
    }
    else {
        cout << "Invalid values" << endl;
    }
    return 0; 
}