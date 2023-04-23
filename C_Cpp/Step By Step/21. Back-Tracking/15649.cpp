//BOJ 15649 - SILVER 3
//https://www.acmicpc.net/problem/15649

#include <iostream>
using namespace std;
int N,M; // 1 <= M <= N <= 8

int check[9] = {0, }, nums[9] = {0, };

void backTrack(int n, int m, int cnt = 0){
    if(cnt == M){
        for(int i = 0; i < M; i++)cout << nums[i] << ' ';
        cout << "\n";
    }else for(int i = 1; i <= N; i++) if(check[i] == 0){
        check[i] = 1;
        nums[cnt] = i;
        backTrack(n,m,cnt+1);
        check[i] = 0;
    }
}

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);
    cin >> N >> M;

    backTrack(N,M);
    return 0;
}