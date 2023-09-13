#include <iostream>
#include <string.h>
using namespace std;

bool LinearSearch(int arr[],int n, int k){
    for(int i=0;i<n;i++){
        if(arr[i]==k)return true;
    }
    return false;
}
int main(){
    int n;
    cout<< "Enter size of array : \n";
    cin>>n;
    int arr[n];
    cout << "Enter elements of array:" <<endl;
    for(int i=0;i<n;i++)cin>>arr[i];
    int a;
    cout<<"Enter key:"<<endl;
    cin >>a;
    if(LinearSearch(arr,n,a)) cout<<"Key Found"<<endl;
    else cout<<"Key not Found"<<endl;
    return 0; 
}