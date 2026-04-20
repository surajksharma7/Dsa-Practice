#include<iostream>
using namespace std;

int main(){
    char grade; 
    cout << "Enter your grade " << endl;
    cin >> grade;

    switch(grade){
        case 'A':
            cout << "your grade is between 90 and 100" << endl;
            break;
        case 'B':
            cout << "Your marks is between 80 and 90" << endl;
            break;
        case 'C':
            cout << "Your marks is between 70 and 80" << endl;
            break;
        case 'D':
            cout << "Your marks is between 60 and 70" << endl;
            break;
        case 'E':
            cout << "Your marks is between 50 and 60" << endl;
            break;
        default:
            cout << "you have failed the exam better luck next time " << endl;
    }
    return 0;
}