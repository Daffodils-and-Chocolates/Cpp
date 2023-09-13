#include <iostream>
using namespace std;

int main(){
    int n,x,pairs,count=0;
    int dupli=0;
    cout<< "Enter size of array : \n";
    cin>>n;
    int arr[n];
    cout << "Enter elements of array:" <<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter x"<<endl;
    cin>>x;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i]+arr[j]==x){
                // cout<<arr[i]<<"+"<<arr[j]<<endl;
                if(arr[i]==arr[j]){
                    dupli++;
                }
                count++;
            }
        }
    }
    pairs = (count/2)-dupli/4;
    cout<<"Possible number of pairs are: "<<dupli;
    return 0; 
}