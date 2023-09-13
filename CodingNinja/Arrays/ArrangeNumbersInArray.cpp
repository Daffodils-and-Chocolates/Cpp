#include <iostream>
using namespace std;

int main(){
    int n,k,x,j=0;
    cout << "Enter size of array" <<endl;
    cin >> n;
    int u = n-1;
    // cout<<"Enter elements of arary\n";
    int arr1[n],arr2[n];
    // for(int i=0;i<n;i++){
    //     cin>>arr1[i];
    // }
    for(int i=1;i<=n;i++){
        arr1[i-1]=i;
    }
    // for(int i=0;i<n;i++){
    //     cout<<arr1[i];
    // }
    if(n%2==0){
        k=n/2;
    }
    else{
        k=(n+1)/2;
    }
    // cout<<"k:"<<k<<endl;
    for(int i=0;j<k;i+=2,j++){
        // cout<<arr1[i];
        arr2[j]=arr1[i];
        // cout<<" i: "<<i <<"\t j:"<<j<<endl;
    }
    for(int i=1;j<n;i+=2,j++,u--){
        // cout<<"is this even running?";
        // cout<<"u:"<<u<<"\n";
        arr2[u]=arr1[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr2[i]<<" ";
    }
    return 0; 
}