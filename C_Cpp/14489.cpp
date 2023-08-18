//BOJ 14489 - BRONZ 3
//https://www.acmicpc.net/problem/14489
#include <iostream>
using namespace std;
int A,B,C;

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);

    cin >> A >> B >> C;

    if(A+B >= C*2) cout << A + B - C*2;
    else cout << A+B;
}