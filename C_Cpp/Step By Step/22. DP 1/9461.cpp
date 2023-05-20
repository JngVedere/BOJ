//BOJ 9461 - SILVER 3
//https://www.acmicpc.net/problem/9461
#include <iostream>
using namespace std;
int T, n;
long long pdv[101];

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);
    cin >> T;
    pdv[1] = pdv[2] = pdv[3] = 1;
    for(int i = 4; i <= 100; i++) pdv[i] = pdv[i-2] + pdv[i-3];
    while(T--){
        cin >> n;
        cout << pdv[n] << "\n";
    }
    return 0;
}