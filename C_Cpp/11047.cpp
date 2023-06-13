//BOJ 11047 - SILVER 4
//https://www.acmicpc.net/problem/11047
#include <iostream>
#include <algorithm>
using namespace std;
int N, K, c = 0, p[10];

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);
    cin >> N >> K;
    for(int i = N-1; i >= 0; i--) cin >> p[i];
    for(int i = 0; i < N; i++){
        if(p[i] > K) continue;

        c += K/p[i];
        K %= p[i];
    }
    cout << c;
}
