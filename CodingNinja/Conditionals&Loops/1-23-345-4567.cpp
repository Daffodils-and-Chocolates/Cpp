// Pattern for N=4
// 1
// 23
// 345
// 4567

#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a number" <<endl;
    cin >> n;
    int i=1;
    while (i<=n){
        int j=1; // number of values to print in current row
        int v= i;//the value to print in the row
        while (j<=i){
            cout << v;
            v++;
            j++;
        }
        cout << endl;
        i++;
    }
    // for(int i = 1;n>=i;i++){
    //     for(int j =1; j<=i ; j++){
    //         int v =i;
    //         cout<<v;
    //     }
    //      cout << endl;
    // }
    return 0;
}