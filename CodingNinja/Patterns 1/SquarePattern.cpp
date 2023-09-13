// For N =4
// 4444
// 4444
// 4444
// 4444
#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a number" <<endl;
    cin >> n;
    // int i=1;
    // while (i<=n){
    //     int j = 1;
    //     while (j<=n){
    //         cout<<n;
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout << n;
        }
        cout<<endl;
    }
        return 0; 
}