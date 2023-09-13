// #include <iostream>
// #include <cmath>
// using namespace std;

// int main(){
//     int n,u,d,backr=0;
//     cout << "Enter a number" <<endl;
//     cin >> n;
//     for(d=0,u=n;u>0;u/=10,d++){
//         //for counting number of digits in the input
//     }
//     int mid=pow(10,d/2);
//     int back= (n%mid);
//     int front={(n-back)/mid};
//     if(d%2!=0){
//         front/=10;
//     }
//     // cout<< endl<< "First half: "<< front << endl <<"back half: " << back << endl;
//     //reversing back
//     for(int j=back;j>0;j/=10,backr*=10){
//         backr+=j%10;
//     }
//     backr/=10;
//     if(front==backr){
//         cout<<"Yes it is a Palindrome";
//     }
//     else{
//         cout<<"No it is not a Palindrome";
//     }
//     //for odd

//     return 0; 
// }
#include <iostream>
using namespace std;

int reversenum(int a){
    int ar=0;
    for(;a>0;a/=10){
        ar=ar*10+a%10;
        cout<<"ar: "<<ar<<" ";
    }
    cout<<endl;
    return ar;
}

int main(){
    int n;
    cout << "Enter a number" <<endl;
    cin >> n;
    if(reversenum(n)==n){
        cout<<"Yes it is a Palindrome";
    }
    else{
        cout<<"No it is not a Palindrome";
    }
    return 0; 
}