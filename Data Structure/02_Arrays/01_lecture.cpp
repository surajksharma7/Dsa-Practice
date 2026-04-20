#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;


void printArr(int arr[], int size){
    for(int i=0; i< size; i++){
        cout << arr[i] << " ";
    }cout << endl;
}


// function to print twice the original array 
void printTwice(int arr[], int size){
    for(int i=0; i< size; i++){
        cout << 2*arr[i] << " ";
    }cout << endl;
}

// print even or odd 
void printEvenOdd(int arr[], int size){
    for(int i=0; i< size; i++){
        if(arr[i] %2 == 0){
            cout << "Even " ;
        }else{
            cout << "odd ";
        }
    }cout << endl;
}

void countZeros(int arr[], int size){
    int zero=0, one=0;
    for(int i =0; i< size; i++){
        if(arr[i] == 0){
            zero++;
        }else if(arr[i] == 1){
            one++;
        }

    }
    cout << zero << " " << one << " ";
}

void findAverage(int arr[], int size){
    int totalSum=0;
    for(int i =0; i< size; i++){
        totalSum+= arr[i];
    }
    cout << "The average of the array is " << (totalSum/size) << endl;
}

bool linearSearch(int arr[], int size, int target){
    for(int i=0; i< size; i++){
        if(arr[i] == target){
            return true;
        }
    }
    return false;
}

void findMini(int arr[], int size){
    int mini = INT_MAX;
    for(int i=0; i< size; i++){
        mini = min(mini, arr[i]);
    }
    cout << mini << endl;
}


void reverseArray(int arr[], int size){
    // int i =0;
    // int j = size-1;
    // while(i <= j){
    //     int temp = arr[i];
    //     arr[i] = arr[j];
    //     arr[j] = temp;
    // }
    // i++; 
    // j--;

    for(int i=0; i< size; i++){
        cout << arr[i] << " ";
    }

    // this is more effiencent and one liner program 
    int i =0;
    int j = size-1;
    while(i <= j){
        swap(arr[i], arr[j]);
        i++;
        j--;
    }


    for(int i=0; i< size; i++){
        cout << arr[i] << " ";
    }
}


int main(){
    int arr[5]; // Declaration only Creates an array of size 5 and garbage values 
    int arr1[5] = {1, 2}; // Oartial initilization result = {1, 2, 0, 0, 0}
    int arr2[] = {10, 20, 30}; // size automatically becomes 3 
    int arr3[5] = {0}; // all elements become 0
    int arr4[5] = {1}; // first element is 1 only {1, 0, 0, 0, 0}  
    int arr5[5] = {10, 20, 30, 40, 51}; // Declaration with initlization 


    // for(int i =0; i< 5; i++){
    //     cout << arr5[i] << " ";
    // }

    // char charr[10];
    // cout << "\nEnter the values of array ";
    // for(int i =0; i<10; i++){
    //     cin >> charr[i];
    // }

    // cout << "\nthe values in the array are \n";
    // for(int i =0; i<10; i++){
    //     cout << charr[i] << " ";
    // }

    // passing arrays in functions \

    int size = 5;
    printArr(arr5, size);
    printTwice(arr5, size);
    printEvenOdd(arr5, size);
    countZeros(arr5, size);
    bool ans = linearSearch(arr5, 5, 51);
    cout << ans << endl;


    findAverage(arr5, size);
    findMini(arr5, size);

    reverseArray(arr5, size);
    return 0;
}