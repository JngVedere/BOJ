//BOJ 10986 - GOLD 3
//https://www.acmicpc.net/problem/10986
#include <iostream>
using namespace std;
int num[100001] = {-1}, sum[100001];
int N, M, tmp = 0, res = 0;

void solve(){
    for(int i = 2; i <= N; i++){
        sum[i] = sum[i-1] + num[i];
        tmp = sum[i];
        for(int k = i; k <= N - i; k++){
            tmp = tmp + num[k] - num[k-i];
            if(tmp % M == 0) res++;
        }
    }
}

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);
    cin >> N >> M;
    for(int i = 1; i <= N; i++){
        cin >> num[i];
        if(num[i]%M == 0) res++;
    }
    sum[1] = num[1];
    solve();
    cout << res;
    return 0;
}