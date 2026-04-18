#include<iostream>
#include<set>
using namespace std;

int main(){
    string s;
    cin >> s;

    set<char>st;
    for(auto it:s){
        st.insert(it);
    }


    if(st.size()%2 ==0){
        cout << "CHAT WITH HER!\n" << endl;
    }else{
        cout << "IGNORE HIM!\n";
    }

    return 0;
}