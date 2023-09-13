#include <iostream>
using namespace std;

int main(){
    int n,z,o;
    z=o=0;
    cout<< "Enter size of array : \n";
    cin>>n;
    int arr[n];
    cout << "Enter elements of array:" <<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]==0){
            z++;
        }
        else{
            o++;
        }
    }
    for(int i=0;i<=z;i++){
        arr[i]=0;
    }
    for(int i=z;i<(z+o);i++){
        arr[i]=1;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0; 
}