#include <iostream>
using namespace std;

void reverseNumbers(int a){
    int u = a;
    for(;u>0;u/=10){
        cout<<(u%10);
    }
}

int main(){
    int n;
    cout << "Enter a number" <<endl;
    cin >> n;
    reverseNumbers(n);
    return 0; 
}