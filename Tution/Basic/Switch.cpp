#include <iostream>
using namespace std;

int main(){
    char n;
    cout << "Enter a character" <<endl;
    cin >> n;
    switch (n)
    {
    case 'a':
        cout<<"Red";
        break;
    case 'b':
        cout<<"Yellow";
        break;
    case 'c':
        cout<<"Green";
        break;
    default:
        cout<<"Oh pls";
        break;
    }
    return 0; 
}