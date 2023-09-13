#include <iostream>
#include <string.h>
using namespace std;

int recursion(int n){
    if(n==0) return 0;
    else if(n==1||n==2) return 1;
    return recursion(n-1)+recursion(n-2);
}
int main(){
    int n;
    cout << "Enter a number" <<endl;
    cin >> n;
    for(int i=0;i<n;i++){
        cout<<recursion(i);
    }
    return 0; 
}