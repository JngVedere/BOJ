//BOJ 5800 - BRONZ 3
//https://www.acmicpc.net/problem/5800
#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstring>
using namespace std;
int K, N, arr[50],gap;

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);
    cin >> K;
    for(int i = 1; i <= K; i++){
        cin >> N;
        gap = 0;
        memset(arr, 0, sizeof(int)*50);
        for(int j = 0; j < N; j++) cin >> arr[j];
        sort(arr, arr+N);
        for(int j = 1; j < N; j++) if(abs(arr[j]-arr[j-1]) > gap) gap = abs(arr[j]-arr[j-1]);
        cout << "Class " << i << "\nMax " << arr[N-1] << ", Min " << arr[0] << ", Largest gap " << gap << "\n";
    }
}
