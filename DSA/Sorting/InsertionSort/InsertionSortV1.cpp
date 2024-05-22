#include <iostream>
#include <string.h>
using namespace std;

void display(int arr[],int n){
    for(int i=1;i<n;i++){
        cout << arr[i]<<" ";
    }
}
void sorting(int arr[],int n){
    for (int i = 1; i < n; i++)
    {
        int newCard = arr[i];
        int j = i - 1;
        // cout<<"newCard : "<<newCard <<endl;
        for (; j >= 0 && (arr[j] > newCard); j--)
        {
            arr[j + 1] = arr[j];
            // cout << "inside loop : ";
            // display(arr, n);
        }
        arr[j + 1] = newCard;
        // cout<<"outside loop : ";
        // display(arr, n);
        // cout << endl;
    }
}
int main(){
    int n;
    cout<< "Enter size of array : \n";
    cin>>n;
    int arr[++n];
    arr[0]=-1000;
    cout << "Enter elements of array:" <<endl;
    for(int i=1;i<n;i++){
        cin>>arr[i];
    }
    sorting(arr,n);
    display(arr,n);
    return 0; 
}