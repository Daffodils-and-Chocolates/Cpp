// #include <iostream>
// using namespace std;

// int main(){
//     int x,y;
//     cout << "Enter a number" <<endl;
//     cin >> x;    
//     cout << "Enter the power you want to raise it to" <<endl;
//     cin >> y;
//     int i = 1;
//     int z = x;
//     if (y!=0){
//         while (i<y){
//             z = z * x;
//             i++;
//         }
//     }
//     else {
//         z = 1;
//     }
//     cout << "The expression "<< x << "^" << y << " is: "<<z;
//     return 0; 
// }
#include <iostream>
using namespace std;

void power(int a,int b){
    int c=a;
    for(int i =1;i<b;i++){
        a*=c;
    }
    cout<<c<<" to the power "<<b<<" is : "<<a;
}

int main(){
    int n,p;
    cout << "Enter a number and it's power" <<endl;
    cin >> n >> p;
    power(n,p);
    return 0; 
}