// Given a binary number as an integer N, convert it into decimal and print.
#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a number" <<endl;
    cin >> n;
    int dec =0;
    for(int m =1;n>0;n/=10,m*=2){
        dec+=(n%10)*m;
    }
    cout<<"decimal is :"<<dec;
    return 0; 
}