//BOJ 2744 - BRONZ 5
//https://www.acmicpc.net/problem/2744
#include <iostream>
using namespace std; 
string s;
int l;

int main(){
    cin >> s;
    l = s.length();
    for(int i = 0; i < l; i++){
        if(s[i] < 96) s[i] += 32;
        else s[i] -= 32;
    }
    cout << s;
}