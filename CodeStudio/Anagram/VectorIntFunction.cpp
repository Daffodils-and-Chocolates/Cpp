#include <iostream>
#include <vector>
using namespace std;

vector<int> just(int a){
    vector<int> s;
    s.push_back(a);
    s.push_back(a+1);
    return s;
}

int main(){
    int n;
    cout << "Enter a number" <<endl;
    cin >> n;
    // int arr[2]=just(n);
    for(int i=0;i<just(n).size();i++){
        cout<<just(n).at(i)<<" ";
    }
    return 0; 
}