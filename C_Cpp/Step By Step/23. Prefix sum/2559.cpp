//BOJ 2559 - SILVER 3
//https://www.acmicpc.net/problem/2559
#include <iostream>
using namespace std;
int arr[100007] = {0}, carr[100007] = {0};
int N, K, temp = 0, smax = -10000000;

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);

    cin >> N >> K;

    for(int i = 1; i <= N; i++) cin >> arr[i];

    for(int i = 1; i <= K; i++) temp += arr[i];
    carr[1] = temp;

    for(int i = 1; i<= N-K; i++) carr[i+1] = carr[i] - arr[i] + arr[K+i];

    for(int i = 1; i<=N-K+1; i++) if(carr[i] > smax) smax = carr[i];

    cout << smax;
    return 0;
}