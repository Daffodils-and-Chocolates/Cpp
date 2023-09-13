#include <iostream>
#include <string.h>
using namespace std;

void InsertInArray(int arr[],int n,int e,int l){
    for(int i=n-1;i>l-1;i--){
        arr[i]=arr[i-1];
    }
    arr[l] = e;
}
int main(){
    int n;
    cout<< "Enter size of array : \n";
    cin>>n;
    int arr[n];
    cout << "Enter elements of array:" <<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int e;
    cout<<"Enter element to be inserted "<< endl;
    cin >> e;
    int l;
    cout<<"Enter element to be inserted between which numbers"<<endl;
    cin>> l;
    n++;
    InsertInArray(arr,n,e,l);
    for(int i=0;i<n;i++){
        cout << arr[i] <<" ";
    }
    return 0; 
}