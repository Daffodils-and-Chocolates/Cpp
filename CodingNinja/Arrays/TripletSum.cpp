#include <iostream>
using namespace std;

int main(){
    int n,x,count=0;
    cout<< "Enter size of array : \n";
    cin>>n;
    int arr[n];
    cout << "Enter elements of array:" <<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter NUmber x"<<endl;
    cin>>x;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                if(arr[i]+arr[j]+arr[k]==x){
                    count++;
                    cout<<"["<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<"]\n";
                    break;
                }
            }
        }
    }
    cout<<"count : "<<count;
    return 0; 
}