#include<iostream>
using namespace std;

int main(){
    int x, y; 
    cin >> x >> y;
    int count = 0;
    while(x<=y){
        x = 3*x;
        y = 2*y;
        count+=1;
    }
    cout  << count << "\n";
    return 0;
}