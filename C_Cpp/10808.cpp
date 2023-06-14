//BOJ 10808 - BRONZ 4
//https://www.acmicpc.net/problem/10808
#include <iostream>
using namespace std;
int l, alpha[26] = {0};
string s;

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> s;
    l = s.length();
    for(int i = 0; i < l; i++) alpha[s[i]-'a']++;
    for(int i = 0; i < 26; i++) cout << alpha[i] << ' ';
}