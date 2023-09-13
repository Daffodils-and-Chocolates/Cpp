// For N =4
//    1
//   232
//  34543
// 4567654
#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a number" <<endl;
    cin >> n;
    // int i=1;
    // while (i<=n){
    //     int j =1;
    //     int s = i;
    //     int k = (2*i - 1);
    //     int v = i;
    //     while (s<n) {
    //         cout << " ";
    //         s++;
    //     }
    //     while (j<=k){
    //         cout<<v;
    //         j++;
    //         if (j<=(k+1)/2){
    //             v++;
    //         }
    //         else{
    //             v--;
    //         }
    //     }
    //     cout << endl;
    //     i++;
    // }
    for(int i=1;i<=n;i++){
        int v=i;
        int j =1;
        for(int s=i;s<n;s++){
            cout << " ";
        }
        for(;j<i;j++,v++){
            cout << v;
        }
        for(;j<(2*i);j++,v--){
            cout << v;
        }
        cout<<endl;
    }
        return 0; 
}