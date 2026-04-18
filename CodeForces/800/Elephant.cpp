#include<iostream>
using namespace std;

int main(){

    long long int num;
    cin >> num;

    int count = 0;
    if(num >= 5){
        count = (num/5);
        num = num%5;
    }
    if(num >=1 && num <=4){
        count+= 1;
    }
    cout << count  << "\n";
    return 0;
}