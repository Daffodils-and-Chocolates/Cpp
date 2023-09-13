// For N =4
// A
// BC
// CDE
// DEFG
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
    //         v++;
    //     }
    //     cout << endl;
    //     i++;
    // }
    char v ='A';
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++,v++){   
            cout<< v;
        }
        cout<<endl;
    }
        return 0; 
}