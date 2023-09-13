#include <iostream>
#include <string.h>
using namespace std;

void reverseStringWordWise(char input[]){
    int s= strlen(input);
    int k = s-1;
    int c=0;
    int next;
    // for(int i=0;i<s;i++){
    //     if(input[i]=='*'){
    //         c++;
    //     }
    // }
    // cout<<c;
    for(int i=0;i<s;i++){
        if(input[i]=='*'){
            for(int j=i;j>0;j--){
                swap(input[j],input[j-1]);
            }
            for(int j=i+1;j<s;j++){
                if(input[j]=='*'){
                    next = j-1;
                    break;
                }
            }
            cout<<next<<endl<<input<<endl;
            for(int j=next;j>i;j--){
                for(int k=j;k>0;k--){
                swap(input[k],input[k-1]);                    
                }
            }
            cout<<input<<endl;
        }
    }
}

int main(){
    char input[1000];
    cin.getline(input, 1000);
    int a=3;int b=6;
    reverseStringWordWise(input);
    cout << endl<<input << endl;
    return 0; 
}