#include <iostream>
#include <string.h>
using namespace std;

void display(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void SelectionSort(int arr[],int n){
    for(int i=0;i<n;i++){
        int min = i;
        for(int j=i+1;j<n;j++){
            min = (arr[min]<=arr[j])?min:j;
        }
        if(min!=i)swap(arr[min],arr[i]);
        display(arr,n);
    }
}
int main(){
    int n,k;
    cout<< "Enter size of array : \n";
    cin>>n;
    int arr[n];
    cout << "Enter elements of array:" <<endl;
    for(int i=0;i<n;i++)cin>>arr[i];
    SelectionSort(arr,n);
    display(arr,n);
    return 0; 
}