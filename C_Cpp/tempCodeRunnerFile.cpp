//BOJ 4299 - BRONZ 4
//https://www.acmicpc.net/problem/4299
#include <iostream>
using namespace std;
int s, m, x, y;

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);

    cin >> s >> m;
    x = (s + m) / 2;
    y = s - x;
    if(x < 0 || y < 0) cout << -1;
    else cout << x << " " << y;
}
