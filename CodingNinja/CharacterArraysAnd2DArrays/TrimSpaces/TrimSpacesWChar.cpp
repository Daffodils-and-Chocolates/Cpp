#include <iostream>
#include <string.h>
using namespace std;

void trimSpaces(char input[]){
    int temp,count=0;
    int s = strlen(input);
    for(int i=0;i<s;i++){
        if(input[i]==' ')
            count++;
    }
    while(count--){
        for(int i=0;i<s;i++){
            for(int j=0;j<s;j++){
                if(input[i]==' '){
                    temp=input[i];
                    input[i]=input[i+1];
                    input[i+1]=temp;
                }
            }
        }
    }
}

int main(){
    char n[1000];
    cout<<"Enter n:\n";
    cin.getline(n,1000);
    trimSpaces(n);
    cout<<n<<endl;
    return 0; 
}