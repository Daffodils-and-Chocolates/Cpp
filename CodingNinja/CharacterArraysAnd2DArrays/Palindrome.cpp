#include <iostream>
#include <string.h>
using namespace std;

bool CheckPali(char str[]) {
    bool Pali = true;
    int s = strlen(str);
    char rra[s];
    int j=s-1;
    for(int i=0;i<s;i++,j--){
        cout<<str[j]<<"\t"<<str[i];
        if(str[j]!=str[i]){
            Pali = false;
        }
        cout<<endl;
    }
    return Pali;
}

int main(){
    char n[50];
    cout << "Enter a string" <<endl;
    cin >> n;
    cout<<(CheckPali(n)?"true":"false");
    return 0; 
}