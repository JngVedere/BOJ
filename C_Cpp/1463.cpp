//BOJ 1463 - SILVER 1
//https://www.acmicpc.net/problem/1463
#include <iostream>
using namespace std; 
int dp[1000007] = {0,};
int n;

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    for(int i = 2; i <= n; i++){
        dp[i] = dp[i-1] + 1;

        if(i%2 == 0) dp[i] = (dp[i/2] + 1) > dp[i] ? dp[i] : (dp[i/2] + 1);
        if(i%3 == 0) dp[i] = (dp[i/3] + 1) > dp[i] ? dp[i] : (dp[i/3] + 1);
    }
    cout << dp[n];
    return 0;
}