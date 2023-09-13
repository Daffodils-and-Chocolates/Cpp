#include <iostream>
#include <string.h>
using namespace std;

void display(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void BubbleSort(int arr[] , int n){
    for(int i=0;i<n;i++){
        int max = 0;
        int k = n-1-i;
        for(int j=0;j<n-i;j++){
            max = (arr[max]>arr[j])? max : j;
        }
        // cout<<"k : "<<k<<"\tmax : "<<arr[max]<<"\t\t";
        if(max!=k) swap(arr[max],arr[k]);
        // display(arr,n);
    }
}
int main(){
    int n;
    cout<< "Enter size of array : \n";
    cin>>n;
    int arr[n];
    cout << "Enter elements of array:" <<endl;
    for(int i=0;i<n;i++)cin>>arr[i];
    BubbleSort(arr,n);
    display(arr,n);
    return 0; 
}