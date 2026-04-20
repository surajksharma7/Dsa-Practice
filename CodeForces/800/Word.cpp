#include<iostream>
#include<cctype>

using namespace std;

int main(){
    string s;
    cin >> s;

    int upper = 0;
    int lower = 0;

    for(int i=0; i< s.length(); i++){
        char ch = s[i];
        if(isupper(ch)){
            upper++;
        }else{
            lower++;
        }
    }

    string ans = "";
    if(upper > lower){
        for(int i=0; i< s.length(); i++){
            ans.push_back(toupper(s[i]));
        }
    }else{
        for(int i=0; i< s.length(); i++){
            ans.push_back(tolower(s[i]));
        }  
    }
    s = ans;
    cout << s << endl;
    return 0;
}