#include <iostream>
#include <string.h>
using namespace std;

int main(){
    char s1[]="hakuna";
    char s2[]="matata";
    char *p;
    cout<<strcpy(s1,s2); //copies string s2 into s1
    strcpy(s1,s2);
    strcat(s1,s2);

    int s1l= strlen(s1);
    int s2l=strlen(s2);
    cout<<"\n"<<s1l << "\t" << s2l<<endl;

    cout<< strcmp(s1,s2)<<endl;

    cout<< strchr(s1,'u');
    p=strstr(s1,s2); 
    if(p)
    {
        cout<<"hello";
    }
    else{
        cout<<"bye";
    }

    cout<<s1;
    return 0; 
}