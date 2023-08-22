//BOJ 28691 - BRONZ 5
//https://www.acmicpc.net/problem/28691
#include <iostream>
using namespace std;
char K;

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);

    cin >> K;

    if(K == 'M') cout << "MatKor";
    else if(K== 'W') cout << "WiCys";
    else if(K == 'C') cout << "CyKor";
    else if(K == 'A') cout << "AlKor";
    else cout << "$clear";
}