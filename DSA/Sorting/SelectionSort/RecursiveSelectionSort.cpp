#include <iostream>
#include <string.h>
using namespace std;

void display(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void RecursiveSelectionSort(int arr[], int n,int start){
    if(n==start) return;
    int min =start;
    for(int i=start+1;i<n;i++){
        min = (arr[min]<arr[i])? min : i;
    }
    if(min!=start)swap(arr[min],arr[start]);
    RecursiveSelectionSort(arr,n,start+1);
}
int main(){
    int n;
    cout<< "Enter size of array : \n";
    cin>>n;
    int arr[n];
    cout << "Enter elements of array:" <<endl;
    for(int i=0;i<n;i++)cin>>arr[i];
    RecursiveSelectionSort(arr,n,0);
    display(arr,n);
    return 0; 
}