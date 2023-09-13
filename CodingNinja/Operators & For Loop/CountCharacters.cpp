#include <iostream>
using namespace std;

int main(){
    char n;
    cout << "Enter a number" <<endl;
    n= cin.get();
    int ch,dig,space;
    ch=dig=space=0;
    while (n!='$'){
        n = cin.get();
        if(n>='a' && n<='z'){
            ch++;
        }
        else if(n>='0' && n<='9'){
            dig++;
        }
        else if(n==' ' || n=='\t' || n=='\n'){
            space++;
        }
    }
    cout<<ch<<" , "<<dig<<" , "<<space<<endl;
    return 0; 
}