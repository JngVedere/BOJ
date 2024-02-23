//BOJ 2443 - BRONZ 3
//https://www.acmicpc.net/problem/2443
#include <iostream>
using namespace std;
int C, N;

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);

    cin >> N;
    C = N;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < i; j++) cout << ' ';
        for(int k = 0; k < C*2-1; k++) cout << '*';
        C--;
        cout << "\n";
    }
}