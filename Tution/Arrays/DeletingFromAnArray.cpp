#include <iostream>
using namespace std;

int main(){
    int n;
    cout <<"Enter size of array"<<endl;
    cin >> n;
    int arr[n];
    cout<<"Enter elements"<<endl;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int e;
    cout<<"Enter element to remove"<<endl;
    cin >> e;
    for(int i=0;i<n;i++){
        if(e==arr[i]){
            for(int j=i;j<n-1;j++){
                swap(arr[j],arr[j+1]);
            }
            break;
        }
    }
    n=n-1;
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
}