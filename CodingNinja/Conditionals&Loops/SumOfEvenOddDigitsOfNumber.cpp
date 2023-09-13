// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cout << "Enter a number" <<endl;
//     cin >> n;
//     int se , so;
//     se = so = 0;
//     while (n!=0){
//         if((n%10)%2 == 0){
//             se += n%10;
//             n = n/10;
//         }
//         else{
//             so += n%10;
//             n = n/10;
//         }
//     }
//     for()
//     cout << "the sum of all even digits is " << se << endl << "the sum of all odd digits is " << so;
//     return 0; 
// }
#include <iostream>
using namespace std;

void eoDigits(int a){
    int es = 0;
    int os = 0;
    int u =a;
    while(u>0){
        if((u%10)%2==0){
            es+=u%10;
            u/=10;
        }
        else{
            os+=u%10;
            u/=10;
        }
    }
    cout<<"Even digits sum: "<<es<<endl;
    cout<<"Odd digits sum: "<<os;
}
int main(){
    int n;
    cout << "Enter a number" <<endl;
    cin >> n;
    eoDigits(n);
    return 0; 
}