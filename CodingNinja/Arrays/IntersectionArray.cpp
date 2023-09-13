#include <iostream>
using namespace std;

// int getArray(){
//     int n1;
//     cout<< "Enter size of array : \n1";
//     cin>>n1;
//     int arr1[n1];
//     cout << "Enter elements of array:" <<endl;
//     for(int i=0;i<n1;i++){
//         cin>>arr1[i];
//     }
//     return arr1;
// }

int main(){
    // int arr1 = getArray();
    // int arr2 = getArray();
    int n1,n2;
    //array1
    cout<< "Enter size of array : \n";
    cin>>n1;
    int arr1[n1];
    cout << "Enter elements of array:" <<endl;
    for(int i=0;i<n1;i++){
        cin>>arr1[i];
    }
    //array2
    cout<< "Enter size of array : \n";
    cin>>n2;
    int arr2[n2];
    cout << "Enter elements of array:" <<endl;
    for(int i=0;i<n2;i++){
        cin>>arr2[i];
    }
    //on code
    cout<<endl;
    for(int i=0;i<n1;i++){
        // cout<<"i: "<<i<<endl;
        for(int j=0;j<n2;j++){
            // cout<<"\tj: "<<j<<"\t"<<arr1[i]<<"&"<<arr2[j]<<"\t";
            if(arr1[i]==arr2[j]){
                arr2[j]=-1;
                cout<<"["<<arr1[i]<<"]";
                // arr1[j]=-1;
                cout<<"array2:";
                // for(int i=0;i<n2;i++){
                //     cout<<arr2[i]<<" ";
                // }
                break;
            }
        }
        // cout<<endl;
    }
    return 0; 
}