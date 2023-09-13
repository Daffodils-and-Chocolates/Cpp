#include <iostream>
using namespace std;

// void array(int r,int c){
//     int arr[r][c];
//     cout<<"Enter array numbers :\n";
//     for(int cc=0;cc<c;cc++){
//         for(int rc=0;rc<r;rc++){
//             cin>> arr[rc][cc];
//         }
//     }
//     for(int cc=0;cc<c;cc++){
//         cout<<"|";
//         for(int rc=0;rc<r;rc++){
//             cout<<arr[rc][cc]<<" ";
//         }
//         cout<<"|"<<endl;
//     }
// }

void ith(int a){
    a++;
    if(a%10==1){
        cout<<a<<"st ";
    }
    else if(a%10==2){
        cout<<a <<"nd ";
    }
    else if(a%10==3){
        cout<<a <<"rd ";
    }
    else{
        cout<<a <<"th ";
    }
}
// int array(){
//     int r,c;
//     cout << "Enter size of array by rows and column" <<endl;
//     cin >> r >> c;
//     int arr[r][c];
//     cout<<"Enter array numbers :\n";
//     for(int cc=0;cc<c;cc++){
//         for(int rc=0;rc<r;rc++){
//             cin>> arr[rc][cc];
//         }
//     }
//     return arr;
// }

int main(){
    int r,c,rc,cc;
    cout << "Enter number of subjects" <<endl;
    cin >> r;
    cout<<"Enter number of students"<<endl;
    cin >> c;
    int arr[r][c];
    for(cc=0;cc<c;cc++){
        cout<< "For the "; ith(cc); cout<<"student:\n";
        for(rc=0;rc<r;rc++){
            cin>> arr[rc][cc];
        }
    }
    for(rc=0;rc<r;rc++){
        int sum=0;
        for(cc=0;cc<c;cc++){
            sum+=arr[rc][cc];
        }
        cout<<"Average of ";ith(rc);cout<<"subject is:";
        cout<< (float)(sum/cc)<< endl;
    }
    return 0; 
}