#include <iostream>
using namespace std;

// bool anagram(char x[],char y[],int n){
//     bool anagram = false;
//     for(int i=0;i<=n;i++){
//         cout<<"x[i] : "<<x[i]<<endl;
//         for(int j=0;j<=n;j++){
//             cout<<"\ty[j] : "<<y[j];
//             if(x[i]==y[j]){
//                 anagram = true;
//                 cout<<endl;
//                 break;
//             }                                             
//         }
//         if(anagram){
//             cout<<i;
//         }
//     }
//     return anagram;
// }

bool anagram(char x[],char y[],int n){
    bool anagram = false;
    int counter = 0;
    for(int i=0;i<n;i++){
        cout<<"x[i] : "<<x[i]<<endl;
        for(int j=0;j<n;j++){
            cout<<"\ty[j] : "<<y[j];
            if(x[i]==y[j]){
                y[j]=0;
                counter++;
                break;
            }
        }
        cout<<endl;
    }
    if(counter==n){
        anagram=true;
    }
    return anagram;
}

int main(){
    int a = 3;
    char STR[a] = "bac";
    char PTR[a] = "abc";
    cout<< anagram(STR,PTR,a);
    for(int i=0;i<a;i++){
        cout<<PTR[i];
    }
    return 0; 
}