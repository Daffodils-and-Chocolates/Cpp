#include <iostream>
#include <algorithm>
using namespace std;

void display(int arr[], int n){
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    cout<<endl;
}
void QuickSort(int arr[],int s, int e){
    int n = e-s;
    if(n<=1) return;
    int l=s,h=e-1,p=0;
    while(l<h){
        if(arr[l]>arr[h]){
            swap(arr[l],arr[h]);
            p = (p==l)? h : l;
            (p==h)? l++ : h--; 
        }
        // display(arr,7);
    }
    QuickSort(arr,s,p);
    QuickSort(arr,p+1,e);
}
int main(){
    int n;
    cout<< "Enter size of array : \n";
    cin>>n;
    int arr[n];
    cout << "Enter elements of array:" <<endl;
    for(int i=0;i<n;i++)cin>>arr[i];
    QuickSort(arr,0,n);
    display(arr,n);
    return 0; 
}