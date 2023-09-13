// For N =4
//    1
//   212
//  32123
// 4321234
#include <iostream>
using namespace std;

int main(){
    int n,j,v;
    cout << "Enter a number" <<endl;
    cin >> n;
    for(int i=1;i<=n;i++){
        for(int s=i;s<n;s++){
            cout<<" ";
        }
        for(j=1,v=i;j<=(2*i-1);j++){
            if(j==1){
                cout<<v;
                continue;
            }
            else if(j<=i) {
                v--;
            }
            else{
                v++;
            }
            cout<<v;
        }
        cout<<endl;
    }
        return 0; 
}