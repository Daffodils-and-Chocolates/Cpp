#include <iostream>
using namespace std;

int main(){
    int n1;
    cout<< "Enter size of array : \n";
    cin>>n1;
    int arr1[n1];
    cout << "Enter elements of array:" <<endl;
    for(int i=0;i<n1;i++){
        cin>>arr1[i];
    }
    cout<< "Enter size of array : \n";
    cin>>n2;
    int arr2[n2];
    cout << "Enter elements of array:" <<endl;
    for(int i=0;i<n2;i++){
        cin>>arr2[i];
    }
    int m = 0;
    for(int i=0;i<n1;i++){
        m*= arr1[i];
    }
    return 0; 
}