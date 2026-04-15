/*
    Problem: Sieve of Erato67henes
    Platform: Codeforces
    Link: https://codeforces.com/problemset/problem/2195/A
    Rating: 800
    Tags: brute force, implementation

    Author: Suraj Kumar
    Date: (today's date)
*/

#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int size;
        cin >> size;

        int arr[5];
        bool found = false;
        for(int i =0; i<size;i++){
            int n; 
            cin >> n;
            if(n == 67) found = true;
        }

        (found == 0)?cout << "NO":cout << "YES";
        cout << "\n";
    }
    return 0;
}