#include <iostream>
#include <string.h>
using namespace std;

int main(){
    int n;
    cout<< "Enter size of square array : \n";
    cin>>n;
    char arr[n][n];
    memset( arr, '0', sizeof(arr) );
    for(int i=0;i<n;i++){//display co-ordinates
        for(int j=0;j<n;j++){
            cout<<i<<","<<j<<"  ";
        }
        cout<<endl;
    }
    //starting n-queen
    char temp[n][n];
    for(int i=0;i<n;i++){
        // reset(arr,temp);

    }
    for(int i=0;i<n;i++){//display array
        for(int j=0;j<n;j++){
            cout<< arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0; 
}
template <size_t row>
void reset(char(&arr)[row][row],char(&temp)[row][row]){
    // copy(&arr[0][0], &arr[0][0] + n * n, &temp[0][0]);
}
template <size_t row>
void queenIndex(char(&temp)[row][row],int r){
    for(int i=0;i<row;i++){
        if(temp[r][i]!='Q') temp[r][i]='1';//horizontal
        if(temp[i][r]!='Q') temp[i][r]='1';//vertical
    }
}
// class queen{
// public:
     
// };