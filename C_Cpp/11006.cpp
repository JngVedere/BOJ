//BOJ 11006 - BRONZE 3
//https://www.acmicpc.net/problem/11006
#include <iostream>
using namespace std;
int T, N, M, U, K;

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);

    cin >> T;

    while(T--){
        cin >> N >> M;
        K = N - M;
        U = M - K;
        cout << U << " " << K << "\n";
    }
}