//if A=1,B=1.....Z=26,AA=27,....COD=2422 
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    long long int n,sum=0;
    cout << "Enter number of characters" <<endl;
    cin >> n;
    char arr[n];
    cout<<"Enter characters\n";
    cin >> arr;
    for(int i=0;n>0;n-=1,i++){
        // cout<<arr[i]<<endl;
        // cout<<"arr[i] is : "<<(int)arr[i]-64<<endl;
        if(n==1){
            sum+=arr[i]-64;
        }
        else{
            // cout<<"26 to "<<(n-1) <<" is : "<< pow(26,n-1)<<endl;
            sum+=(pow(26,n-1)*(arr[i]-64));
        }
        // cout<<sum<<" ";
        // cout<<"LOOP CHANGE"<<endl;
    }
    cout<<sum;
    return 0; 
}