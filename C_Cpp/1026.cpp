//BOJ 1026 - SILVER 4
//https://www.acmicpc.net/problem/3460
#include <iostream>
#include <algorithm>
using namespace std;
int n,A[51], B[51],ans=0;

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    for(int i = 0; i < n; i++) cin >> A[i];
    for(int i = 0; i < n; i++) cin >> B[i];
    sort(A,A+n);
    sort(B,B+n,greater<int>());
    for(int i = 0; i < n; i++) ans += A[i]*B[i];
    cout << ans;
}