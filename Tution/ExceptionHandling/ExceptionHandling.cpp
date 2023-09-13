#include <iostream>
using namespace std;

int divv(int a, int b){
    if(b==0){
        throw "please eneter a valid number";
    }
    return (a/b);
}

int main(){
    int a,b;
    cout << "Enter numbers" <<endl;
    cin >> a >> b;
    int k=0;
    try{
        k = divv(a,b);
        cout << k;
    }
    catch(const char* e){
        cerr<<e<<endl;
    }
    return 0; 
}