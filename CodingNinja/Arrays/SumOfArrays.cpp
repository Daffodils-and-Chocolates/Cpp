// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cout << "Enter size of array" <<endl;
//     cin >> n;
//     int a[n];
//     cout<<"Enter Array Integers: \n";
//     for(int i=0;i<n;i++){
//         cin>> a[i];
//     }
//     //sum of array
//     int sum=0;
//     for(int i=0;i<n;i++){
//         sum+=a[i];
//     }
//     cout<<"Sum of array is: "<<sum;
//     return 0; 
// }
#include <iostream>
using namespace std;

int sumarr(int a[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=a[i];
    }
    return sum;
}

int main(){
    int n;
    cout << "Enter size of array" <<endl;
    cin >> n;
    int a[n];
    cout << "Enter array elements: \n";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Sum of array is : "<< sumarr(a,n);
    return 0; 
}