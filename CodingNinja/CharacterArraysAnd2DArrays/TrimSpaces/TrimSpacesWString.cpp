#include <iostream>
#include <string.h>
using namespace std;

string trimSpaces(string str){
    int temp,count;
    int s= str.size();
    cout<<s<<endl;
    for(int i=0;i<s;i++){
        if(str[i]==' '){
            count++;
        }
    }
    while(count--){
        for(int i=0;i<s;i++){
            if(str[i]==' '){
                temp=str[i];
                str[i]=str[i+1];
                str[i+1]=temp;
            }
        }
    }
    return str;
}

int main(){
    string str;
    cout<<"Enter a string:"<<endl;
    getline(cin,str);
    cout<<trimSpaces(str);
    return 0; 
}