#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a number" <<endl;
    cin >> n;
    long long int bi=0;
    for(long long int m=1;n>0;n/=2,m*=10){
        bi+=(n%2)*m;
    }
    cout<<"Binary is:"<<bi;
    return 0; 
}
//cin<<1234567 doesn't give binary WHYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY bcz loong long int isn't enough?