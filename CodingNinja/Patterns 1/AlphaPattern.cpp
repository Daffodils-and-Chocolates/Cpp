// For N =4
// A
// BB
// CCC
// DDDD
#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a number" <<endl;
    cin >> n;
    // int i=1;
    // while (i<=n){
    //     int j =1;
    //     char v = i + 64;
    //     while (j<=i){
    //         cout << v;
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }
    char v = 'A';
    for(int i=1;i<=n;i++,v++){
        for(int j=1;j<=i;j++){
            cout<<v;
        }
        cout<<endl;
    }
        return 0; 
}