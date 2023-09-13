#include <iostream>
#include <string.h>
using namespace std;

int main(){
    int t;
    cout << "Enter number of test cases" <<endl;
    cin >> t;
    while(t--){
        int a,b;
        cin>>a>>b;
        cout<<a*b;
    }
    return 0; 
}