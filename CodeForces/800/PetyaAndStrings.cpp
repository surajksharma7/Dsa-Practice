#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    string s1, s2;
    cin >> s1 >> s2;
    // for(int i =0; i< s1.length();i++){
    //     char ch1 = toupper(s1[i]);
    //     char ch2 = toupper(s2[i]);


    //     if(ch1 == ch2){
    //         continue;
    //     }else if(ch1 > ch2){
    //         cout << 1 << "\n";
    //         return 0;
    //     }else{
    //         cout << -1 << "\n";
    //         return 0;
    //     }
    // }
    // cout << 0 << "\n";

    transform(s1.begin(), s1.end(), s1.begin(), :: toupper);
    transform(s2.begin(), s2.end(), s2.begin(), :: toupper);

    if(s1 > s2) cout << 1;
    else if(s1 < s2) cout << -1;
    else cout << 0;
    return 0;
}