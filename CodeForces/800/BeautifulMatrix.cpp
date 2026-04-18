#include<iostream>
using namespace std;

int solve(int arr[][5], int row, int col, int &count){
    while(row != 2){
        count++;
        if(row > 2){
            row -=1;
        }else{
            row+=1;
        }
    }
    while(col !=2){
        count++;
        if(col > 2){
            col -= 1;
        }else{
            col += 1;
        }
    }
    return count;
}

// this loop is ok but we can also do the same in one line that->  value =  abs(row-2)+ abs(col-2);


int main(){
    int arr[5][5];
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            cin >> arr[i][j];
        }
    }
    int row = 0;
    int col = 0;
    for(int i =0; i< 5; i++){
        for(int j=0; j<5; j++){
            if(arr[i][j] == 1){
                row = i;
                col = j;
            }
        }
    }
    int ans=0;
    solve(arr, row, col, ans);
    cout << ans << "\n";
    return 0;
}