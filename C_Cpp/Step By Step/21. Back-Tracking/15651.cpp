//BOJ 15651 - SILVER 3
//https://www.acmicpc.net/problem/15651

#include <iostream>
using namespace std;
int N,M;

int checks[8] = {0, }, nums[8] = {0, };

void backTrack(int cnt = 0){
    if(cnt == M){
        for(int i = 0; i<M; i++) cout << nums[i] << ' ';
        cout << "\n";
    }else for(int i = 1; i <= N; i++){ //dfs part
        checks[i] = 1;
        nums[cnt] = i;
        backTrack(cnt+1);
        checks[i] = 0;
    }
}

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);

    cin >> N >> M;
    backTrack();
    return 0;
}