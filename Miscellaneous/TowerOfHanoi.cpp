#include <iostream>
#include <string.h>
using namespace std;
void towerOfHanoi(int n,char from_rod,char to_rod,char aux_rod);

int main(){
    int n;
    cout << "Enter number of disks" <<endl;
    cin >> n;
    towerOfHanoi(n,'A','C','B');
    return 0; 
}
void towerOfHanoi(int n,char from_rod,char to_rod,char aux_rod){
    if(n==0) return;
    towerOfHanoi(n-1,from_rod,aux_rod,to_rod);
    cout<<"Move " << n << " rod from " << from_rod <<" to "<< to_rod<<endl;
    towerOfHanoi(n-1,aux_rod,to_rod,from_rod);
}