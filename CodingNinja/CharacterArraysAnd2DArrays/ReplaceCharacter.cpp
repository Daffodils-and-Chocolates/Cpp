#include <iostream>
#include <string.h>
using namespace std;

void replaceChar(char str[],int a,int b){
    int s = strlen(str);
    for(int i=0;i<s;i++){
        if(str[i]==a){
            str[i]=b;
        }
    }
}

int main(){
    char str[500];
    char c1,c2;
    cout<<"Enter string:"<<endl;
    cin >> str;
    cout<<"Enter character and it's replacement:"<<endl;
    cin>>c1>>c2;
    replaceChar(str,c1,c2);
    cout<< str<<endl;
    return 0; 
}