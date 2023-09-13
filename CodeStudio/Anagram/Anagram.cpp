#include <iostream>
using namespace std;

bool anagram(char x[],char y[],int n){
    bool anagram = false;
    int counter = 0;
    for(int i=0;i<n;i++){
        // cout<<"x[i] : "<<x[i]<<endl;
        for(int j=0;j<n;j++){
            // cout<<"\ty[j] : "<<y[j];
            if(x[i]==y[j]){
                y[j]=0;
                counter++;
                break;
            }
        }
        // cout<<endl;
    }
    if(counter==n){
        anagram=true;
    }
    return anagram;
}

int main(){
    int t,a,b;
    // cout << "Enter number of test cases" <<endl;
    // cin >> t;
    cout<<"Enter characters in STR"<<endl;
    cin>>a;
    cout<<"Enter characters in PTR"<<endl;
    cin>>b;
    char STR[a],PTR[b];
    cout<<"Enter in STR\n";
    for(int i=0;i<a;i++){
        cin>>STR[i];
    }
    cout<<"Enter in PTR\n";
    for(int i=0;i<b;i++){
        cin>>PTR[i];
    }
    char arr[b-1];
    for(int i=0;i<=a-b;i++){
        char PTRR[b];
        for(int c=0;c<b;c++){
            PTRR[c]=PTR[c];
        }
        for(int j=0;j<b;j++){
            arr[j]= STR[i+j];
        }
        // for(int c=0;c<b;c++){
        //     cout<<arr[c];
        // }
        if(anagram(arr,PTRR,b)){
            cout<<i<<" ";
        }
        // cout<<endl;
    }
    return 0; 
}