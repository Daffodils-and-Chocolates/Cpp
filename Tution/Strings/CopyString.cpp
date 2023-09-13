#include <iostream>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;

int main(){
    char s1[5];
    char s2[]= "amo";
    for(int i=0;i<strlen(s2);i++){
        s1[i] = s2[i];
    }
    cout<<s1;
    return 0; 
}