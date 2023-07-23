//BOJ 11816 - BRONZ 2
//https://www.acmicpc.net/problem/11816
#include <iostream>
using namespace std;
string s;
int o;

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL)   ;

    cin >> s;

    if(s[0] != '0') o = stoi(s);
    else if(s[1] == 'x'){
        s = s.substr(2, s.length()-2);
        o = stoi(s, nullptr, 16);
    }else{
        s = s.substr(1, s.length()-1);
        o = stoi(s, nullptr, 8);
    }

    cout << o;
}