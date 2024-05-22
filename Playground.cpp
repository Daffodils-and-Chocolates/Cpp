#include <iostream>
using namespace std;

void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

void selectionSort(int arr[], int n)
{ // is not stable
    for (int i = 0; i < n; i++)
    {
        int min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[min] > arr[j])
            {
                swap(arr[min], arr[j]);
            }
        }
        display(arr, n);
    }
}

void bubbleSort(int arr[], int n)
{ // is stable
    for (int i = n - 1; i >= 0; i--)
    {
        int max = i;
        for (int j = 0; j < i; j++)
        {
            max = (arr[max] < arr[j]) ? j : max;
        }
        if (max != i)
        {
            swap(arr[max], arr[i]);
        }
        display(arr, n);
    }
}

void recursiveBubbleSort(int arr[], int n, int i = 0)
{
    if (i >= n)
        return;
    int max = n - i - 1;
    for (int j = 0; j < n - i; j++)
    {
        if (arr[max] < arr[j])
            max = j;
    }
    if (max != n - i - 1)
        swap(arr[max], arr[n - i - 1]);
    recursiveBubbleSort(arr, n, ++i);
}

void insertionSort(int arr[], int n)
{
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

void twoWayMerge(int arr[], int n){

}

int main()
{
    int n;
    cout << "Enter size of array : \n";
    cin >> n;
    int arr[n];
    cout << "Enter elements of array:" << endl;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    insertionSort(arr, n);
    cout << "Sorted :";
    display(arr, n);
    return 0;
}