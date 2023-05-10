//BOJ 6840 - BRONZ 5
//https://www.acmicpc.net/problem/6840
#include <iostream>
#include <algorithm>
using namespace std;
int n[3];

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);
    for(int i = 0; i < 3; i++) cin >> n[i];
    sort(n,n+3);
    cout << n[1];
    return 0;
}