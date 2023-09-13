#include <iostream>
#include <algorithm>
using namespace std;

void display(int arr[], int n){
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    cout<<endl;
}
void twoWayMerge(int arr[],int left[],int right[],int n,int l,int r){
    int i =0,j=0,k=0;
    while(k<n){
        if(i>=l) arr[k++] = right[j++];
        else if(j>=r) arr[k++] = left[i++];
        else arr[k++] = (left[i]>right[j])? right[j++] : left[i++];
    }
}
void mergeSort(int arr[],int n){
    if(n<=1) return;
    int l = n/2 ,r = n-n/2;
    int left[l] ,right[r];
    copy(arr,arr+l,left);
    copy(arr+l,arr+n,right);
    mergeSort(left,l);
    mergeSort(right,r);
    twoWayMerge(arr,left,right,n,l,r);
}
int main(){
    int n;
    cout<< "Enter size of array : \n";
    cin>>n;
    int arr[n];
    cout << "Enter elements of array:" <<endl;
    for(int i=0;i<n;i++)cin>>arr[i];
    mergeSort(arr,n);
    display(arr,n);
    return 0; 
}