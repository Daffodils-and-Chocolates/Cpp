// For N =4
// 4444
// 333
// 22
// 1
#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a number" <<endl;
    cin >> n;
    // int i=1;
    // while (i<=n){
    //     int j =1;
    //     int s = 1;
    //     while (j<=(n-i+1)){
    //         cout << (n-i+1);
    //         j++;
    //     }
    //     // while (s<i) {
    //     //     cout << " ";
    //     //     s++;
    //     // }
    //     cout << endl;
    //     i++;
    // }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=(n-i+1);j++){
            cout << (n-i+1);
        }
        cout<<endl;
    }
        return 0; 
}