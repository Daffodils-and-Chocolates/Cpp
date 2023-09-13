#include <iostream>
using namespace std;

int main(){
    int n,m,x,s;
    cout<< "Enter size of array : \n";
    cin>>n;
    int arr[n];
    cout << "Enter elements of array:" <<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int l=0;
    int h=n-1;
    if(n%2==0){
        m = n/2;
    }
    else{
        m=(n+1)/2;
    }
    cout<<"Enter key"<<endl;
    cin>>x;
    while(arr[m]!=x){
        if(x>m){
            l=m;
        }
        else{
            h=m;
        }
        s=++h-l;
        if(s%2==0){
            m= s/2;
        }
        else{
            m = (s+1)/2;
        }
    }
    if(arr[m]==x){
        cout<<"Key is found! "<<m;
    }
    else{
        cout<<"Key is not found";
    }
    return 0; 
}