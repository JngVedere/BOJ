//BOJ 5576 - BRONZ 2
//https://www.acmicpc.net/problem/5576
#include <iostream>
#include <algorithm>
using namespace std;
int W[10], K[10];
int w=10, k=10;

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);
    while(w--) cin >> W[w];
    while(k--) cin >> K[k];
    sort(W,W+10); sort(K,K+10); 
    cout << W[9] + W[8] + W[7] << " " << K[9] + K[8] + K[7];
}
