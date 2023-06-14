//BOJ 1373 - BRONZ 1
//https://www.acmicpc.net/problem/1373
#include <iostream>
#include <algorithm>
using namespace std;
string s,o,tmp;
int l;

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);
    cin >> s;
    l = s.length();
    for(int i = l-1; i >= 2; i-=3){
        tmp = s[i] + s[i-1] + s[i-2];
    }
}