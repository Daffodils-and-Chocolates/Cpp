#include <iostream>
#include <string.h>
using namespace std;

void display(int arr[],int n){
    for(int i=0;i<n;i++)cout<<arr[i]<<" ";
    cout<<endl;
}
void bubbleSort(int arr[],int n){
    int m=n;
    while(n-->1){
        for(int j=0;j<n;j++){
            if(arr[j]>arr[j+1])swap(arr[j],arr[j+1]);
            display(arr,m);
        }
    }
}
int main(){
    int n;
    cout<< "Enter size of array : \n";
    cin>>n;
    int arr[n];
    cout << "Enter elements of array:" <<endl;
    for(int i=0;i<n;i++)cin>>arr[i];//array input
    bubbleSort(arr,n);
    display(arr,n);
    return 0; 
}