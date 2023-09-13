#include <iostream>
#include <string.h>
using namespace std;

void display(int arr[],int n){
    for(int i=0;i<n;i++)cout<<arr[i] <<" ";
}
int checkMaxDigits(int arr[],int n){
    int max=0;
    for(int i=0;i<n;i++){
        max = arr[i]>max?arr[i]:max;
    }
    int u=0;
    while(max!=0){
        u++;
        max/=10;
    }
    return u;
}
void radixSort(int arr[],int n){
    int m = checkMaxDigits(arr,n);
    int ten =10;
    while(m--){
        for(int i=0;i<n;i++){
            if(arr[i]%10)
        }
    }
}
int main(){
    int n;
    cout<< "Enter size of array : \n";
    cin>>n;
    int arr[n];
    cout << "Enter elements of array:" <<endl;
    for(int i=0;i<n;i++)cin>>arr[i];
    
    return 0; 
}