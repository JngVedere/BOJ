// BOJ 27219 - BRONZ 5
//https://www.acmicpc.net/problem/27219
#include <iostream>
using namespace std;
int n, c;

int main(){
    ios :: sync_with_stdio(false);
    cin >> n;

    c = n / 5;
    n %= 5;
    while(c--) cout << 'V';
    while(n--) cout << 'I';
}