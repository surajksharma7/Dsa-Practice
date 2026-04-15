#include<iostream>
using namespace std;

int main(){
    int n; int k; 
    cin>> n >> k;

    int arr[100];

    for(int i =0; i<n; i++){
        int value; 
        cin >> value;
        arr[i] = value;
    }

    int count = 0;
    for(int i=0; i<n; i++){
        if(arr[i] >= arr[k-1] && arr[i] > 0){
            count++;
        }
    }

    cout << count << "\n";
    return 0;
}