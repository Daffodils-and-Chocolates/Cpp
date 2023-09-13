#include <iostream>
using namespace std;

int main(){
    int s;
    cout<< "Enter size of array : \n";
    cin>>s;
    int n[s];
    cout << "Enter elements of array:" <<endl;
    for(int i=0;i<s;i++){
        cin>>n[i];
    }
    //sum
    int sum=0;
    for(int i=0;i<s;i++){
        sum+=n[i];
    }
    cout<<sum;
    return 0; 
}