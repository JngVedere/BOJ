//BOJ 14924 - BRONZ 4
//https://www.acmicpc.net/problem/14924
#include <iostream>
using namespace std;
int S, T, D, F;

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);

    cin >> S >> T >> D;
    cout << D/(2*S) * T;
}