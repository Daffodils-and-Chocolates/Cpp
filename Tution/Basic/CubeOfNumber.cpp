#include <iostream>
using namespace std;

int cube(int n){
    int c=n*n*n;
    return c;
}
int main(){
    int n;
    cout << "Enter a number" <<endl;
    cin >> n;
    cout<< cube(n);
    return 0; 
}