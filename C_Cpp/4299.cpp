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
    y = (s - m) / 2;
    if(s < m) cout << -1;
    else if(x+y == s && x-y == m) cout << x << " " << y;
    else cout << -1;
}
