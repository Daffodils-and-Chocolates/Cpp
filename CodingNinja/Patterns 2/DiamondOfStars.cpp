// only for an odd number N = 5 & 7
//   *      *
//  ***    ***  
// *****  *****
//  ***  *******
//   *    *****
//         ***
//          *
#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter an odd number" <<endl;
    cin >> n;
    // int i=1;
    // int k=(n+1)/2;
    // for(;i<=(n+1)/2;i++){
    //     for(int s=i;s<k;s++){
    //         cout<<" ";
    //     }
    //     for(int j=1;j<2*i;j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
    // for(int a = 1;a<k;a++,i++){
    //     for(int s=1;s<=(i-k);s++){
    //         cout<<endl;
    //     }
    //     for(int j=1;)
    // }
    // for(;i<=n;i++){
    //     for(int j=1;j<i/2;j--){
    //         cout<<"*";
    //     }
    //     cout<<endl;        
    // }
    int i,j,k; //i is the curent row, j is the number of values to print in the current row
    i=j=1;
    k = (n+1)/2; // k is at what number is the middle row
    while (i<=n){
        int jc =1; //counter for j starting from 1
        if (i<k){
            // spaces if current row is before middle row is k-i
            int s = i;
            while (s<k){
                cout << " ";
                s++;
            }
        }
        else {
            // spaces if current row is after the middle row is i-k
            int s = k;
            while (s<i){
                cout << " ";
                s++;
            }
        }
        while (jc<=j){ 
            //while (jc<=j) means while all the values for the current row haven't been printed the loop will go on
            cout << "*";
            jc++;
        }
        if (i<k){ 
            // if the current row is before the middle row then the number of values that are printed in each row increases by 2
            j+=2;
        }
        else {
            // if the current row is after the middle row then the number of values that are printed in each row decreases by 2
            j-=2;
        }
        cout << endl;
        i++;
    }
    return 0; 
}