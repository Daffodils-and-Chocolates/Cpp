// Pattern for N=4
//    1
//   23
//  345
// 4567

#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a number" <<endl;
    cin >> n;
    // int i=1;
    // while (i<=n){
    //     int j=1;
    //     int v= i;
    //     int s = i; // number of spaces in each row are always (n-i)
    //     while (s<n) {
    //         cout << " ";
    //         s++;
    //     }
    //     while (j<=i){
    //         cout << v;
    //         v++,j++;
    //     }
    //     cout << endl;
    //     i++;
    // }
    int j,v;
    for(int i =1; i <=n;i++){
        for(int s=i;s<n;s++){
            cout << " ";
        }
        for(j =1,v=i;j<=i;j++,v++){
            cout << v;
        }
        cout << endl;
    }
    return 0;
}