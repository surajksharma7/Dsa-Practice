#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    string s; 
    cin>> s;

    vector<char>myvect;

    for(auto it:s){
        if(it != '+'){
            myvect.push_back(it);
        }
    }

    sort(myvect.begin(), myvect.end());

    for(int i=0; i< myvect.size(); i++){
        cout << myvect[i];
        if(i != myvect.size()-1) cout << "+";
    }

    return 0;
}