#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a number" <<endl;
    cin >> n;
    for (int i=1;i<=n;i++){
        bool Prime = true;
        if(i==1){
            continue;
        }
        if(i==2){
            cout<<i<<endl;
            continue;
        }
        for(int d=2;d<i;d++){
            if(i%d == 0){
                // cout << i;
                Prime = false;
                break;
            }
        }
        if (Prime){
            cout << i << endl;
        }
    }
    return 0; 
}