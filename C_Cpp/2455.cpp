//BOJ 2455 - BRONZ 4
//https://www.acmicpc.net/problem/2455
#include <iostream>
using namespace std;
int d, u, n, m;

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);

    for(int i = 0; i < 4; i++){
        cin >> d >> u;
        n = n - d + u;
        if(n > m) m = n;
    }

    cout << m;
}