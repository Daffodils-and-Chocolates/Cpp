#include <iostream>
using namespace std;

void katGaya(char a[],int b){
    for(int i=0;i<b;i++){
        cout<< a[i];
    }
}

int main(){
    int a = 9;
    int b =3;
    char STR[a]="abdecjgve";
    char arr[b-1];
    for(int i=0;i<=a-b;i++){
        for(int j=0;j<b;j++){
            arr[j]= STR[i+j];
        }
        katGaya(arr,b);
        // for(int c=0;c<b;c++){
        //     cout<< arr[c];
        // }
        cout<<endl;
    }
    return 0; 
}