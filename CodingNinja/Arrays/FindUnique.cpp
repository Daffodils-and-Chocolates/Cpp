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
        int dupli = 0;
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]){
                dupli++;
            }
        }
        if(dupli==1){
            cout<<arr[i];
            break;
        }
    }
    return 0; 
}