#include <iostream>
#include <string.h>
using namespace std;

void display(int arr[], int a,int b){
    for(int i=a;i<b;i++)cout<< arr[i]<<" ";
    cout<<endl;
}
void Sorting(int arr[],int start, int end){
    int p = start;
    int low = start;
    int high = end-1;
    if(low==high||start==end)return;
    while(low!=high){
        if(p==low){
            if(arr[p]>arr[high]){
                swap(arr[p],arr[high]);
                p = high;
                low++;
            }
            else high--;
        }
        else if(p==high){
            if(arr[p]<arr[low]){
                swap(arr[p],arr[low]);
                p = low;
                high--;
            }
            else low++;
        }
    }
    cout<<"pivot is "<<arr[p]<<endl;
    display(arr,0,6);
    cout<<"Sorting left: ";display(arr,start,p);
    cout<<"Sorting right: ";display(arr,p+1,end);
    Sorting(arr,start,p);
    Sorting(arr,p+1,end);
}

int main(){
    int n;
    cout<< "Enter size of array : \n";
    cin>>n;
    int arr[n];
    cout << "Enter elements of array:" <<endl;
    for(int i=0;i<n;i++)cin>>arr[i];
    Sorting(arr,0,n);
    display(arr,0,n);
    return 0; 
}