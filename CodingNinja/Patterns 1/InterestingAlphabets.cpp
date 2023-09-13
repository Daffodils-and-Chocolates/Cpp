// For N = 4
// E
// DE
// CDE
// BCDE
// ABCDE
#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a number" <<endl;
    cin >> n;
    // int i=1;
    // if (n<=26){
    //     while (i<=n){
    //         int j =1;
    //         char v = n + 64 -i +1;
    //         while (j<=i){
    //             cout<<v;
    //             j++;
    //             v++;
    //         }
    //         cout << endl;
    //         i++;
    //     }
    // }
    // else {
    //     cout << "Number given is Invalid";
    // }
    int v = (64+n);//char A =int 65
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++,v++){
            cout << (char)v;
        }
        cout<<endl;
        v = (64+n-i);
    }
    return 0; 
}