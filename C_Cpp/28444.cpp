//BOJ 28444 - BRONZ 5
//https://www.acmicpc.net/problem/28444
#include <iostream>
using namespace std;
int H,I,A,R,C;

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);

    cin >> H >> I >> A >> R >> C;
    cout << H*I - A*R*C;
}