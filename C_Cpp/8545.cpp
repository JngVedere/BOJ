//BOJ 8545 - BRONZ 5
//https://www.acmicpc.net/problem/8545
#include <iostream>
using namespace std;
string s;

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);
    cin >> s;
    int l = s.length();
    for(int i = l-1; i >= 0; i--){
        cout << s[i];
    }
    return 0;
}