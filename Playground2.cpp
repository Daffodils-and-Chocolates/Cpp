#include <iostream>
#include <string.h>
using namespace std;

int main(){
    int n;
    cout<< "Enter size of array : \n";
    cin>>n;
    char arr[n][n];
    cout << "Enter elements of array:" <<endl;
    memset( arr, '0', sizeof(arr) );
    cout<< "Enter co ordinates"<<endl;
    int a,b;
    cin>>a>>b;
    int c = a-b;
    //diagonals to '1'
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i+j==a+b) arr[i][j] = '1';//left diagonal
            if(a==b&&i==j) arr[i][j] = '1';

        }
    }
    return 0; 
}