// Given a number N, print sum of all even numbers from 1 to N.

// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter a number" <<endl;
//     cin >> n;
//     int i , sum;
//     i = sum = 0;
//     while (n>=i){
//         sum += i;
//         i += 2;
//     }
// //     for (int i = 0;n>=i;i+=2){
// //         sum+= i;
// //     }
// //     cout << sum;
//     cout << "Sum of all even numbers till " << n << " is " << sum << endl;
//     return 0;
// }
#include <iostream>
using namespace std;

int evensum(int a){
    int sum=0;
    for(int i=2;i<=a;i+=2){
        sum+=i;
    }
    return sum;
}

int main(){
    int n;
    cout << "Enter a number" <<endl;
    cin >> n;
    cout<< evensum(n);
    return 0; 
}