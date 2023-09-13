#include <iostream>
#include <vector>
using namespace std;

vector<int> findAnagramsIndices(string str, string ptr, int n, int m){
    vector<int> v;
    //cutting string-------------------
    char arr[m-1];
    for(int i=0;i<=n-m;i++){
        char ptrr[m];
        //storing ptr which will become 0 otherwise to ptr
        for(int c=0;c<m;c++){
            ptrr[c]=ptr[c];
        }
        for(int j=0;j<m;j++){
            arr[j]= str[i+j];
        }
        // cout<<"Current String :";
        // for(int c=0;c<m;c++){
        //     cout<<arr[c];
        // }
        // cout<<endl;
        //anagram -------------------------
        bool anagram = false;
        int counter = 0;
        for(int i=0;i<m;i++){
            // cout<<"arr[i] : "<<arr[i]<<endl;
            for(int j=0;j<m;j++){
                // cout<<"\tptrr[j] : "<<ptrr[j];
                if(arr[i]==ptrr[j]){
                    ptrr[j]=0;
                    counter++;
                    break;
                }
            }
            // cout<<endl;
        }
        if(counter==m){
            anagram=true;
            // cout<<"It's an anagram"<<endl;
        }
        if(anagram){
            v.push_back(i);//storing index if true in vector
        }
        // cout<<endl;
    }
    // for(int i=0;i<v.size();i++){
    //     cout<<v.at(i)<<" ";
    // }
    return v;
}

int main(){
    int n,a,b;
    // cout<<"Enter size of STR"<<endl;
    cin>>a;
    // cout<<"Enter size of PTR"<<endl;
    cin>>b;
    char STR[a],PTR[b];
    // cout<<"Enter in STR\n";
    for(int i=0;i<a;i++){
        cin>>STR[i];
    }
    // cout<<"Enter in PTR\n";
    for(int i=0;i<b;i++){
        cin>>PTR[i];
    }
    for(int i=0;i<findAnagramsIndices(STR,PTR,a,b).size();i++){
        cout<<findAnagramsIndices(STR,PTR,a,b).at(i)<<" ";
    }
    return 0; 
}