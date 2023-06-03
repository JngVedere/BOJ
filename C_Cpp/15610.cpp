//BOJ 15610 - BRONZ 4
//https://www.acmicpc.net/problem/15610
#include <iostream>
#include <cmath>
using namespace std;
long long s;
double e, i;

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);
    cin >> s;
    e = sqrt(s);
    i = 4 * e;
    cout << fixed;
    cout << i;
    return 0;
}