// For N = 4
// 1
// 21
// 321
// 4321
#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a number" <<endl;
    cin >> n;
    // int i=1;
    // while (i<=n){
    //     int v = i;
    //     int j =1;
    //     while (j<=i){
    //         cout<<v;
    //         j++,v--;
    //     }
    //     cout << endl;
    //     i++;
    // }
    int j,v;
    for(int i=1;i<=n;i++){
        for(j=1,v=i;j<=i;j++,v--){
            cout<< v;
        }
        cout<<endl;
    }
    return 0; 
}