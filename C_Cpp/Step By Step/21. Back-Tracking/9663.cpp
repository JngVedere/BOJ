//BOJ 9663 - GOLD 4
//https://www.acmicpc.net/problem/9663
#include <iostream>
using namespace std;
bool chess[16][16] = {0,};
int n, cnt = 0, res = 0; // 1 <= N < 15

bool isPlacable(int x, int y){
    for(int i = 0; i < n; i++){
        if(chess[x][i] || chess[i][y]) return false;
        if (x - i >= 0 && y - i >= 0 && chess[x - i][y - i]) return false;
		if (x + i < n && y + i < n && chess[x + i][y + i]) return false;
		if (x - i >= 0 && y + i < n && chess[x - i][y + i]) return false;
		if (x + i < n && y - i >= 0 && chess[x + i][y - i]) return false;
	}
    return true;
} 

void backTrack(int cnt){
    if(cnt == n){
        // for(int i = 0; i < n; i++){
        //     for(int j = 0; j < n; j++) 
        //         cout << (chess[i][j] ? "1 " : "0 ");
        //     cout << "\n";
        // }
        // cout << "\n";
        res++;
        return;
    }

    for(int i = 0; i < n; i++){
        if(!isPlacable(cnt,i)) continue;

        chess[cnt][i] = 1;
        backTrack(cnt+1);
        chess[cnt][i] = 0;
    }
}

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;
    backTrack(0); 
    cout << res;
    return 0;
}