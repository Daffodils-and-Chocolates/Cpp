// Pattern for N = 4
//    1
//   23
//  456
// 78910

#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter number" << endl;
    cin >> n;
    // int current_row =1;
    // int value_to_print_rn =1;
    // while (current_row<=n){
    //     int spaces = current_row;
    //     //cout << spaces <<endl;
    //     while (spaces<n){
    //         cout << " ";
    //         spaces++;
    //     }
    //     int numberOfValuesInRow =1;
    //     while (numberOfValuesInRow<=current_row){
    //         cout << value_to_print_rn;
    //         value_to_print_rn++,numberOfValuesInRow++;
    //     }
    //     cout << endl;
    //     current_row++;
    // }
    int v=1;
    for(int i=1;i<=n;i++){
        for(int s=i;s<n ;s++){
            cout << " ";
        }
        for(int j=1; j<=i;j++,v++){
            cout<< v;
        }
        cout<<endl;
    }
    return 0;
}