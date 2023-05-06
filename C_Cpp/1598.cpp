//BOJ 1598 - BRONZ 3
//https://www.acmicpc.net/problem/1598
#include <iostream>
#include <cmath>
using namespace std;

int first,second;
int xf,xs,yf,ys;
int ans;

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);
    cin >> first >> second;

    first--; second--;
    xf = first / 4; yf = first % 4;
    xs = second / 4; ys = second % 4;
    ans = abs(xf-xs) + abs(yf-ys);
    cout << ans;
    return 0;
}