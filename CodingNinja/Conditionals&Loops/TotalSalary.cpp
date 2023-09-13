// Write a program to calculate the total salary of a person. The user has to enter the basic salary (an integer) and the grade 
// (an uppercase character), and depending upon which the total salary is calculated as -
//     totalSalary = basic + hra + da + allow – pf
#include <iostream>
using namespace std;

int main(){
    int basic;
    char grade;
    cout << "Enter Basic Salary" << endl;
    cin >> basic;
    cout << "Enter grade of salary" << endl;
    cin >> grade;
    float hra = 0.20*basic;
    float da = 0.50*basic;
    float pf = 0.11*basic;
    int allow;
    if (grade == 'A'||grade == 'a' ){
        allow = 1700;
    }
    else if (grade == 'B'||grade == 'b'){
        allow = 1500;
    }
    else{
        allow = 1300;
    }
    int totalSalary = basic +  hra + da + allow - pf;
    cout << "The total salary is " << totalSalary;
    return 0;
}