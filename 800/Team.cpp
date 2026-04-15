#include<iostream>
using namespace std;

int main(){
        int n;
        cin >> n;

        int arr[1000][3];
        for(int i=0; i<n;i++){
            for(int j=0; j< 3; j++){
                int value;
                cin >> value;
                arr[i][j] = value;
            }
        }

        int total = 0;
        for(int i=0; i<n; i++){
            int count =0;
            for(int j=0; j< 3; j++){
                if(arr[i][j] == 1){
                    count+=1;
                }
            }
            if(count >=2) total+=1;
        }
        cout << total<<"\n";
    
    return 0;
}