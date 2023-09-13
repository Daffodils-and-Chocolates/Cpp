#include <iostream>
using namespace std;

int main(){
    int a,b;
    cout << "Enter a & b" <<endl;
    cin >> a >> b;
    cout << endl;
    cout << a << " and " << b << " is " <<  (a&b) << endl;
    cout << a << " or " << b << " is " <<  (a|b) << endl;        
    cout << "not " << a << " is " << (~a) << endl << "not " << b << " is " <<(~b) << endl;
    cout << a << " xor " << b << " is " << (a ^ b) << endl;
    // cout << a << "nor" << b << " is "<< (); 
    return 0; 
}