//BOJ 10886 - BRONZ 3
//https://www.acmicpc.net/problem/10886
#include <iostream>
using namespace std;
int N, K, S=0;

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> K;
        S += K;
    }
    cout << (S>N/2 ? "Junhee is cute!" : "Junhee is not cute!");
    return 0;
}