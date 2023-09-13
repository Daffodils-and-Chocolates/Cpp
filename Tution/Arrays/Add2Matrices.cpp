#include <iostream>
using namespace std;

int main(){
    int n1,n2;
    cout<< "Enter size of array : \n";
    cin>>n1;
    int arr1[n1];
    cout << "Enter elements of array:" <<endl;
    for(int i=0;i<n1;i++){
        cin>>arr1[i];
    }
    // sizeof(arr1)/sizeof(arr1[0]);
    cout<< "Enter size of array : \n";
    cin>>n2;
    int arr2[n2];
    cout << "Enter elements of array:" <<endl;
    for(int i=0;i<n2;i++){
        cin>>arr2[i];
    }
    //sum of these two
    if(n1!=n2){
        cout<<"cannot be added";
    }
    else{
        int arr[n1];
        for(int i=0;i<n1;i++){
            arr[i]=arr1[i]+ arr2[i];
        }
        cout<<"[";
        for(int i=0;i<n1;i++){
            cout<<arr[i];
        }
        cout<< "]";
    }
    return 0; 
}