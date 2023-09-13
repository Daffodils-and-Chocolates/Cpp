#include <iostream>
using namespace std;

int power(int a, int b){
    int p=1;
    for(int i=1;i<=b;i++){
        p*=a;
    }
    return p;
}
int binarytodecimal(int a){
    int sum=0;
    int u =a;
    for(int i=0;u>0;u/=10,i++){
        int k=u%10;
        if(k==1){
            sum+=power(2,i);
        }
    }
    return sum;
}

int main(){
    int n;
    cout << "Enter a number" <<endl;
    cin >> n;
    cout<< binarytodecimal(n);
    return 0; 
}