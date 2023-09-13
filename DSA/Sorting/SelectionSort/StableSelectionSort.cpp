#include <iostream>
#include <string.h>
using namespace std;

void display(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void StableSelectionSort(int arr[], int n){
    for(int i=0;i<n;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            min = (arr[min]<arr[j])? min : j;
        }
        int key = arr[min];
        for(int j=min;j>i;j--) arr[j]=arr[j-1];
        arr[i]= key;
    }
}
int main(){
    int n;
    cout<< "Enter size of array : \n";
    cin>>n;
    int arr[n];
    cout << "Enter elements of array:" <<endl;
    for(int i=0;i<n;i++)cin>>arr[i];
    StableSelectionSort(arr,n);
    display(arr,n);
    return 0; 
}