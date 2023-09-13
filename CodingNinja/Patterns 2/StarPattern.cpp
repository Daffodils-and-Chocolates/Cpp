// For N = 4
//    *
//   ***
//  *****
// *******
#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a number" <<endl;
    cin >> n;
    // int i=1;
    // while (i<=n){
    //     int j =1;
    //     int s = i;
    //     while (s<n) {
    //         cout << " ";
    //         s++;
    //     }
    //     while (j <= (i+i-1)){
    //         cout<<"*";
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }
    for(int i=1;i<=n;i++){
        for(int s=i;s<n;s++){
            cout<<" ";
        }
        for(int j=1;j<(2*i);j++){
            cout << "*";
        }
        cout<<endl;
    }
        return 0; 
}