//BOJ 7567 - BRONZ 2
//https://www.acmicpc.net/problem/7567
#include <iostream>
using namespace std;
int sum = 10, l;
string s;

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);
    cin >> s;
    l = s.length();
    for(int i = 1; i < l; i++) sum += (s[i] == s[i-1] ? 5 : 10);
    cout << sum;
}