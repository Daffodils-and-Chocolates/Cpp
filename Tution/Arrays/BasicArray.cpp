#include <iostream>
using namespace std;

int main(){
    int k[7]; int n;
    cout << "Enter array size" <<endl;
    cin >> n;
    cout<<"Enter array elements\n";
    for (int i = 0; i<n; i++){
        cin>>k[i];
    }
    cout<<"[";
    for(int i=0;i<n;i++){
        cout<<k[i]<<" ";
    }
    cout<<"]";
    return 0; 
}