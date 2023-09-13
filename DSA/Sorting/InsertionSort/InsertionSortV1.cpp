#include <iostream>
#include <string.h>
using namespace std;

void display(int arr[],int n){
    for(int i=1;i<n;i++){
        cout << arr[i]<<" ";
    }
}
void sorting(int arr[],int n){
    for(int i=2;i<n;i++){
        for(int j=i-1;j>=0;j--){
            if(arr[j]<arr[i]){
                for(int k=i;k>j+1;k--){
                    swap(arr[k],arr[k-1]);
                }
                break;
            }
        }
    }
}
int main(){
    int n;
    cout<< "Enter size of array : \n";
    cin>>n;
    int arr[++n];
    arr[0]=-1000;
    cout << "Enter elements of array:" <<endl;
    for(int i=1;i<n;i++){
        cin>>arr[i];
    }
    sorting(arr,n);
    display(arr,n);
    return 0; 
}