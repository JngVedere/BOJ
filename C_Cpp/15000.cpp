//BOJ 15000 - BRONZ 5
//https://www.acmicpc.net/problem/15000
#include <iostream>
#include <string>
using namespace std;
int l;
string n;

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    l = n.length();
    for(int i = 0; i < l; i++) n[i] = toupper(n[i]);
    cout << n;
    return 0;
}