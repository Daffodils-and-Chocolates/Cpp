// Write a program that asks the user for a number N and a choice C. And then give them the possibility to choose between computing the sum and computing the product of all integers in the range 1 to N (both inclusive).
// If C is equal to -

//  1, then print the sum
//  2, then print the product
//  Any other number, then print '-1' (without the quotes)

#include <iostream>
using namespace std;

int main(){
    int n,c;
    cout << "Enter a number" <<endl;
    cin >> n;
    cout <<endl<< "Enter a Choice C\n1:Sum till n\n2:Product till n"<<endl;
    cin >> c;
    int sum =0;
    int product=1;
    for(int i=1;i<=n;i++){
        if(c==1){
            sum+=i;
        }
        else if(c==2){
            product*=i;
        }
        else{
            cout<<"-1"<<endl;
            break;
        }
    }
    if(c==1){
        cout<<"sum is :"<<sum;
    }
    else if(c==2){
        cout<<"Product is :" <<product;
    }
    return 0; 
}

// The doubling of if outside for loop again is bothering me. 
// but the other way to do it would be to insert for loop in ifs twice even though the basic structure is same. 
// Something to think about to improve quality of this code but i doubt i will revisit.