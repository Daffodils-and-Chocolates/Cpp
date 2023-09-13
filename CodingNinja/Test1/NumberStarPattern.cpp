// for N =5
// 1234554321
// 1234**4321
// 123****321
// 12******21
// 1********1
#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a number" <<endl;
    cin >> n;
    for(int i=1;i<=n;i++){
        int k=n-i+1;
        int kc=1;
        //straight
        for(int j=1;j<=n;j++,kc++){
            if(kc<=k){
                cout<<j;
            }
            else{
                cout<<"*";
            }
        }
        //reverse
        for(int j=1;j<=n;j++){
            if(j<i){
                cout<<"*";
            }
            else{
                cout<<k;
                k--;
            }
        }
        cout<<endl;
    }
    return 0; 
}