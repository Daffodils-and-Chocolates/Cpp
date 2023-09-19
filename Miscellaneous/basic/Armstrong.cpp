// #include <iostream>
// #include <cmath>
// using namespace std;

// int main(){
//     int n,i,u,sum=0;
//     cout << "Enter a number" <<endl;
//     cin >> n;
//     u =n;
//     for(;u>0;u/=10){
//         i = u%10;
//         sum+= pow(i,3);
//     }
//     if(sum==n){
//         cout<<"yes";
//     }
//     else{
//         cout<<"no";
//     }
//     return 0; 
// }
#include <iostream>
#include <cmath>
using namespace std;

void armstrong(int a){
    int sum=0;
    int u=a;
    for(;u>0;u/=10){
        sum+=pow(u%10,3);
    }
    if(sum==a){
        cout<<"Yes it is an Armstrong "<<sum;
    }
    else{
        cout<<"No it is not an Armstrong "<<sum;
    }
}

int main(){
    int n;
    cout << "Enter a number" <<endl;
    cin >> n;
    armstrong(n);
    return 0; 
}