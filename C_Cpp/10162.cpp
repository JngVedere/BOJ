//BOJ 10162 - BRONZ 3
//https://www.acmicpc.net/problem/10162
#include <iostream>
#define A 300
#define B 60
#define C 10
using namespace std;
int T, ans[3];

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);
    cin >> T;
    ans[0] = T/A;
    T %= A;
    ans[1] = T/B;
    T %= B;
    ans[2] = T/C;
    T %= C;
    if(T!=0) cout << -1;
    else cout << ans[0] << " " << ans[1] << " " << ans[2];
}