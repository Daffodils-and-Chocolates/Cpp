#include <iostream>
#include <string.h>
using namespace std;

void display(int arr[], int n){
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    cout<<endl;
}
void InsertionSort(int arr[], int n){
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]) swap(arr[i],arr[i+1]);
        if(arr[i]<arr[i-1]){
            for(int j=i; arr[j]<arr[j-1] && j>0 ;j--){
                swap(arr[j],arr[j-1]);
                // display(arr,n);
            }
        }
        // display(arr,n);
        // cout<<endl;
    }
}
int main(){
    int n;
    cout<< "Enter size of array : \n";
    cin>>n;
    int arr[n];
    cout << "Enter elements of array:" <<endl;
    for(int i=0;i<n;i++)cin>>arr[i];
    InsertionSort(arr,n);
    display(arr,n);
    return 0; 
}