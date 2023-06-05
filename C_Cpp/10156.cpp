//BOJ 10156 - BRONZ 4
//https://www.acmicpc.net/problem/10156
#include <iostream>
using namespace std;
int K,N,M;

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);
    cin >> K >> N >> M;
    cout << (K*N > M ? K*N-M : 0);
    return 0;
}