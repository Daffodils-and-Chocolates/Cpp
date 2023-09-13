#include <iostream>
using namespace std;

int main(){
    int n,s,p;
    s=0;p=1;
    cout << "Enter a number" <<endl;
    cin >> n;
    //sum
    for(int i=1;i<=n;i++){
        s+=i;
    }
    cout<<"Sum is: "<< s <<endl;
    // product
    for(int i=1;i<=n;i++){
        p*=i;
    }
    cout<<"Product is: "<< p <<endl;
    return 0; 
}