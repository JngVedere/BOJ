//BOJ 1357 - BRONZ 1
//https://www.acmicpc.net/problem/1357
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
string x, y;

inline int rev(string s){
    reverse(s.begin(),s.end());
    return stoi(s);
}

inline string rev(int i){
    string s = to_string(i);
    reverse(s.begin(), s.end());
    return s;
}

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);

    cin >> x >> y;
    cout << stoi(rev(rev(x) + rev(y)));
}