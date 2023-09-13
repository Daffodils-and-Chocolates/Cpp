// F(n) = F(n-1) + F(n-2), 
// Where, F(1) =  1, 
//        F(2) = 1
#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a number" <<endl;
    cin >> n;
    int f1, f2,f3;
    f1 = f2= 1;
    for(int i=3;i<=n;i++){
        f3 = f2 + f1;
        f1 = f2;
        f2 = f3;
    }
    if(n==1||n==2){
        cout<<"1";
    }
    else{
        cout<<"nth number is :"<< f3;
    }
    return 0; 
}