//BOJ 11656 - SILVER 4
//https://www.acmicpc.net/problem/11656
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
string S, prefix[1001];

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);

    cin >> S;
    int l = S.length();

    for(int i = 0; i < l; i++) prefix[i] = S.substr(i,l-i);

    sort(prefix, prefix + l);

    for(int i = 0; i < l; i++) cout << prefix[i] << "\n";
}