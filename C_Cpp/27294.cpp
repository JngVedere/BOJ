// BOJ 27294 - BRONZ 5
//https://www.acmicpc.net/problem/27294
#include <iostream>
using namespace std;
int T, S;

int main(){
    cin >> T >> S;
    if(S || T<12 || T>16) cout << 280;
    else cout << 320;
}