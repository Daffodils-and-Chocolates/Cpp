// Pattern for N = 4
// 1
// 23
// 456
// 78910

#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a number" << endl;
    cin >> n;
    // int i=1;
    // int v = 1;
    // while (i<=n){
    //     int j = 1;
    //     while (j<=i){
    //         cout << v;
    //         v++,j++;
    //     }
    //     cout << endl;
    //     i++;
    // }
    int v=1;
    for(int i =1; i<=n ; i++){
        for(int j=1; j<=i ;j++,v++){
            cout<< v;
        }
        cout << endl;
    }
    return 0;
}