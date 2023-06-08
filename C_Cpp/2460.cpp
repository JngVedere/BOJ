//BOJ 2460 - BRONZ 3
//https://www.acmicpc.net/problem/2460
#include <iostream>
using namespace std;
int R = 10;
int d, u, t = 0, ans = 0;

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);
    while(R--){
        cin >> d >> u;
        t -= d;
        if(t > ans) ans = t;
        t += u;
        if(t > ans) ans = t;
    }
    cout << ans;
}