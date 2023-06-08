//BOJ 1676 - SILVER 5
//https://www.acmicpc.net/problem/1676
#include <iostream>
using namespace std;
int N;
int ans = 0;

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);
    cin >> N;
    ans = N/5 + N/25 + N/125;
    cout << ans;
}