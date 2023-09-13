#include <iostream>
#include <string.h>
using namespace std;

void display(int arr[],int n){
    for(int i=0;i<n;i++)cout<<arr[i]<<" ";
    cout<<endl;
}
void countingSort(int arr[],int n){
    int ar[10]={0,0,0,0,0,0,0,0,0,0};
    for(int i=0;i<n;i++)ar[arr[i]]++;//tally array
    for(int i=1;i<10;i++)ar[i]+=ar[i-1];//accumulative array
    for(int i=9;i>0;i--)ar[i]=ar[i-1];//right shift the array 
    ar[0]=0;
    display(ar,10);
}
int main(){
    int n;
    cout<< "Enter size of array : \n";
    cin>>n;
    int arr[n];
    cout << "Enter elements of array:" <<endl;
    for(int i=0;i<n;i++)cin>>arr[i];
    countingSort(arr,n);
    // display(arr,n);
    return 0; 
}