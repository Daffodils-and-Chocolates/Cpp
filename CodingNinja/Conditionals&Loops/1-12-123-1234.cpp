// Pattern for N = 4
// 1
// 12
// 123
// 1234

#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a number" << endl;
    cin >> n;
//     int i=1; // i is the current row at which the code is at
//     while (i<=n){
//         int j =1; // j is the no. of values to print in the current row
//         while (j<=i){ // means while all the values to print in the current row have not been printed the loop will continue, coincidentally the number of values to be printed happen to be same the number the current row is at
//             cout << j; 
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
    for(int i=1;i<=n;i++){
        for(int j =1;j<=i;j++){
            cout<< j;
        }
        cout<<endl;
    }
    return 0;
}