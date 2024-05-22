#include <iostream>
using namespace std;

int main()
{
    int n, a;
    cout << "Enter size of array : \n";
    cin >> n;
    int arr[n];
    cout << "Enter elements of array:" << endl;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int n2;
    cout << "Enter size of array : \n";
    cin >> n2;
    int arr2[n2];
    cout << "Enter elements of array:" << endl;
    for (int i = 0; i < n2; i++)
        cin >> arr2[i];
    merge(arr,n  , arr2, n2);

    return 0;
}

int* merge(int arr1[] , int n1 , int arr2[], int n2){
    int a=0,b=0;
    int arr[n1+n2];
    for(int i=0;i<n1+n2;i++){
        if(a>=n1 || b >=n2){

        }
        else if(arr1[a] >= arr2[b]){

        }
    }
}