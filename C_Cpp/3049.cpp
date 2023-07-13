//BOJ 3049 - SILVER 5
//https://www.acmicpc.net/problem/3049
#include <iostream>
using namespace std;
int N;

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);

    cin >> N;
    cout << N * (N-1) * (N-2) * (N-3) / 24;
}