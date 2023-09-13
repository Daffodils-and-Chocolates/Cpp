#include <iostream>
#include <string.h>
using namespace std;

int BinarySearch(int arr[],int n,int k){
    int l=0,h=n-1,m=(l+h)/2;
    while(l<=h){
        m=(l+h)/2;
        cout<<"l:"<<l<<"\tm:"<<m<<"\th:"<<h<<endl;
        if(k>arr[m])l=m+1;
        else if(k<arr[m]) h=m-1;
        else if(k==arr[m])return m;
    }
    return -1;
}
int main(){
    int n,k;
    cout<< "Enter size of array : \n";
    cin>>n;
    int arr[n];
    cout << "Enter elements of array:" <<endl;
    for(int i=0;i<n;i++)cin>>arr[i];
    cout<<"Enter key:"<<endl;
    cin>>k;
    int result = BinarySearch(arr,n,k);
    if(result!=-1) cout<< "Key Found at "<< result<<endl;
    else cout<<"Key not Found"<<endl;
    return 0; 
}