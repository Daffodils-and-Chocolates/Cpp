#include <iostream>
using namespace std;

void printTable(int start, int end, int step) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Print output and don't return it.
     * Taking input is handled automatically.
     */
    for(;start<=end;start+=step){
            cout<<start<<"\t";
            int k= ((start-32)*5.0)/9.0;
            cout<< k<<endl;
    }
}
int main(){
    int s,w,e;
    cout<<"Enter start, end and step"<<endl;
    cin>>s>>e>>w;
    printTable(s,e,w);
    return 0;
}