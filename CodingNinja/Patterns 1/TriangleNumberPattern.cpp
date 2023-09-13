// For N = 4
// 1
// 22
// 333
// 4444
#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a number" <<endl;
    cin >> n;
    // int i=1;
    // while (i<=n){
    //     int j =1;
    //     while (j<=i){
    //         cout<<i;
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<i;
        }
        cout<<endl;
    }    
        return 0; 
}