#include <iostream>
using namespace std;

int linearSearch(int *arr, int n, int x)
{
    int indice = -1;
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            indice=i;
        }
    }
    return indice;
}

int main(){
    int t,n,x;
    cout<<"Enter number of test cases\n";
    cin>>t;
    int sol[t];
    for(int i=1;i<=t;i++){
        cout<<"Enter size of array\n";
        cin>>n;
        int arr[n];
        cout<<"Enter Elements of array\n";
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        cout<<"Enter number to find\n";
        cin>>x;
        sol[i]=linearSearch(arr,n,x);
        cout<<"----------------------\n";
    }
    for(int i=0;i<t;i++){
        cout<<sol[i]<<" ";
    }
    return 0; 
}