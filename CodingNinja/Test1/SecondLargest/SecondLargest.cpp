#include <iostream>
using namespace std;

int main(){
    int n,a,b,c,l,sl,i=0;
    cout << "Enter a number of numbers" <<endl;
    cin >> n;
    if(n>=1){
        cin >> a;
        i++;
        if(n>=2){
            cin >> b;
            i++;
            if(n>=3){
                cin>>c;
                i++;
                if(a>b){
                    if(b>c){
                        l=a;
                        sl=b;
                    }
                    else{
                        if(a>c){
                            l=a;
                            sl=c;
                        }
                        else{
                            l=c;
                            sl=a;
                        }
                    }
                }
                else{
                    if(c>b){
                        l=c;
                        sl=b;
                    }
                    
                }
            }
        }
    }
    for(;i<=n;i++){
        cin >> 
    }
    return 0; 
}