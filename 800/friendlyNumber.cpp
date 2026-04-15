/*
    Problem: Friendly Numbers
    Platform: Codeforces
    Link: https://codeforces.com/problemset/problem/2197/A
    Rating: 800
    Tags: brute force, implementation

    Author: Suraj Kumar
    Date: (today's date)
*/

#include<iostream>
using namespace std;


int sumOfDigit(long long x){
    int sum = 0;
    while(x !=0){
        sum = sum + (x%10);
        x = x/10;
    }
    return sum;
}


int main(){

    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;

        int count = 0;
        for(long long int val=n; val<= n+100; val++){
            if(val - sumOfDigit(val) == n){
                count++;
            }
        }
        cout << count<< endl;
    }
    return 0;
}