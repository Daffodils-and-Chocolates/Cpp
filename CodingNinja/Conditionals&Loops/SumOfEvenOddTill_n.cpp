// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cout << "Enter a number"<< endl;
//     cin >> n;
//     int e,o,se,so;
//     e = se = so = 0;
//     o = 1;
//     while (e<=n){
//         se += e;
//         e += 2;
//     }
//     while (o<=n){
//         so += o;
//         o += 2;
//     }
//     cout << "Sum of even numbers:" << se << endl << "Sum of odd numbers:" << so;
// }
#include <iostream>
using namespace std;

int evenSum(int a){
    int eSum=0;
    for(int i=2;i<=a;i+=2){
        eSum+=i;
    }
    return eSum;
}
int oddSum(int a){
    int oSum=0;
    for(int i=1;i<=a;i+=2){
        oSum+=i;
    }
    return oSum;
}

int main(){
    int n;
    cout << "Enter a number" <<endl;
    cin >> n;
    cout<<"Even sum is : "<<evenSum(n)<<"\nOdd sum is : "<< oddSum(n);
    return 0; 
}