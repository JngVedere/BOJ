//BOJ 15650 - SILVER 3
//https://www.acmicpc.net/problem/15650

#include <iostream>
using namespace std;
int N,M; // 1 <= M <= N <= 8

int check[9] = {0, }, nums[9] = {0, };

void backTrack(int cnt = 0){
    if(cnt == M){ //숫자가 끝까지 도달했다는 건 조건에 충족한다는 것
        for(int i = 0; i < M; i++)cout << nums[i] << ' ';
        cout << "\n";
        return;

    }else for(int i = 1; i <= N; i++) if(!check[i] && nums[cnt-1]<i){ //dfs part
        check[i] = 1;
        nums[cnt] = i;
        backTrack(cnt+1);
        check[i] = 0;
    }
}

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);
    cin >> N >> M;

    backTrack();
    return 0;
}