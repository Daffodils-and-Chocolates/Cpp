#include <iostream>
#include <string.h>
using namespace std;

void display(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void RecursionBubbleSort(int arr[],int n){
    if(n<=1)return;
    int max=0;
    for(int i=0;i<n;i++){
        max =(arr[max]>arr[i])? max : i;
    }
    RecursionBubbleSort(arr,n-1);
}
int main(){
    int n;
    cout<< "Enter size of array : \n";
    cin>>n;
    int arr[n];
    cout << "Enter elements of array:" <<endl;
    for(int i=0;i<n;i++)cin>>arr[i];
    RecursionBubbleSort(arr,n);
    display(arr,n);
    return 0; 
}