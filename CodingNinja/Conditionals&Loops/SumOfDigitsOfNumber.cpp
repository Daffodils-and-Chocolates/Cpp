// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cout << "Enter a number" <<endl;
//     cin >> n;
//     int sum = 0;
//     // while (n!=0){
//     //     sum += (n%10);
//     //     n = n/10;
//     //     cout<<n<<" ";
//     // }
//     for(;n!=0;n/=10){
//         sum += (n%10);
//         cout<<n<<" ";  
//     }
//     cout <<endl<<"The sum of the digits is " << sum;
//     return 0; 
// }
#include <iostream>
using namespace std;

void sumtilln(int a){
    int sum=0;
    for(int i =1;i<=a;i++){
        sum+=i;
    }
    cout<<sum;
}

int main(){
    int n;
    cout << "Enter a number" <<endl;
    cin >> n;
    sumtilln(n);
    return 0; 
}