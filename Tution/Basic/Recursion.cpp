#include <iostream>
using namespace std;

int sum(int n){
    if(n!=0){
        return n + sum(n-1);
    }
    else{
        return n;
    }
}

int main(){
    int n;
    cout << "Enter a number" <<endl;
    cin >> n;
    cout<<"Sum of numbers till n is "<<sum(n);
    return 0; 
}