// Given three values - Start Fahrenheit Value (S), End Fahrenheit value (E) and Step Size (W),
// you need to convert all Fahrenheit values from Start to End at the gap of W, into their corresponding 
// Celsius values and print the table.
// #include <iostream>
// using namespace std;

// int main(){
//     int s,w,e;
//     cout << "Enter value of starting farenheit" << endl;
//     cin >> s;
//     cout << "Enter value of ending farenheit" << endl;
//     cin >> e;
//     cout << "Enter step value" << endl;
//     cin >> w;
//     float c;
//     while (s<=e){
//         cout << s << "   ";
//         c = (9.0/5)*(s-32);
//         cout << (int)c << endl;
//         s += w;
//     }
//     // for(float c=0;s<=e;s +=w){
//     //     cout << s << "  ";
//     //     c = (9.0/5)*(s-32);
//     //     cout << (int)c << endl;
//     // }
//     return 0; 
// }
#include <iostream>
using namespace std;

int ftoc(int a){
    int c;
    c = (a-32)*(5.0/9);
    return c;
}
int ctof(int a){
    int f;
    f = (a*(9.0/5))+32;
    return f;
}
int main(){
    int n; 
    char d;
    cout << "Enter a temperature in celsius or farenheit " <<endl;
    cin >> n >> d;
    if(d == 'f' || d=='F'){
        cout<< ftoc(n);
    }
    else if (d == 'c' || d=='C'){
        cout<< ctof(n);
    }
    else{
        cout<< "Invalid temperature value entered\nPlease try again.";
    }
    return 0; 
}
// #include <iostream>
// using namespace std;

// int ftoc(){
//     int a =45;
//     float c;
//     c = (a-32.0)*(5.0/9.0);
//     return c;                   
// }
// int ctof(){
//     int a =0;
//     int f;
//     f = (a*(9.0/5))+32;
//     return f;
// }

// int main(){
//     int n;
//     cout<<"\nFarenheit to Celsius :" << ftoc();
//     return 0; 
// }