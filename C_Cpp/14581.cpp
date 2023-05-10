//BOJ 14581 - BRONZ 5
//https://www.acmicpc.net/problem/14581
#include <iostream>
using namespace std;
string s, F = ":fan:";

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);
    cin >> s;
    cout << F << F << F << "\n";
    cout << F << ":" << s << ":" << F << "\n";
    cout << F << F << F << "\n";
    return 0;
}