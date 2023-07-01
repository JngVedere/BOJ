//BOJ 5586 - BRONZ 2
//https://www.acmicpc.net/problem/5576
#include <iostream>
using namespace std;
int l, j, o;
string s;

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);
    cin >> s;
    l = s.length();

    for(int i = 0; i < l-2; i++){
        string t = s.substr(i,3);
        if(t == "JOI") j++;
        else if(t == "IOI") o++;
    }
    cout << j << "\n" << o;
}