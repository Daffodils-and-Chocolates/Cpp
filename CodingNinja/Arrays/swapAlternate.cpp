#include <iostream>
using namespace std;

int main(){
    int n;
    cout<< "Enter size of array : \n";
    cin>>n;
    int arr[n];
    cout << "Enter elements of array:" <<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<n-1;i+=2){
        int temp;
        temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
        cout<<i<<"\t";
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0; 
}