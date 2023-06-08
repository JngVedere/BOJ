//BOJ 1292 - BRONZ 1
//https://www.acmicpc.net/problem/1292
#include <iostream>
using namespace std; 
int s, e, k = 0, ans = 0;
int arr[1000];

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);
    cin >> s >> e;

    for(int i = 0; i < e; i++){
        for(int j = 0; j <= i; j++){
            arr[k++] = i+1;
            if(k>999) break;
        }
        if(k>999) break;
    }

    for(int i = s-1; i < e; i++) ans += arr[i];
    cout << ans;
}