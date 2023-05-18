//BOJ 2447 - GOLD 5
//https://www.acmicpc.net/problem/2447

#include <iostream>
using namespace std;
int N;
int arr[6561][6561] = {false,};

//Description
//   0 1 2 3 4 5 6 7 8 
// 0 * * *
// 1 *   *  
// 2 * * *
// 3
// 4
// 5
// 6
// 7
// 8
// 위와 같은 방식으로 격자가 존재할 때, n의 단계에 따라
void recurse(int n, int row, int col){
    int nxt = n/3;

    for(int i = row + nxt; i < row + 2*nxt; i++) 
        for(int j = col+nxt; j<col+2*nxt; j++) 
            arr[i][j] = true;

    if(nxt==1) return;
    recurse(nxt, row,            col);
    recurse(nxt, row + nxt,      col);
    recurse(nxt, row + 2*nxt,    col);

    recurse(nxt, row,            col + nxt);
  //recurse(nxt, row + nxt,      col + nxt); 둘 다 더하는 합의 계수가 1인 경우는 제외하기
    recurse(nxt, row + 2*nxt,    col + nxt);

    recurse(nxt, row,            col + 2*nxt);
    recurse(nxt, row + nxt,      col + 2*nxt);
    recurse(nxt, row + 2*nxt,    col + 2*nxt);
}

void printStar(){
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            if(!arr[i][j]) cout << "*";
            else cout << " ";
        }
        cout << "\n";
    }
    return;
}

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);

    cin >> N;
    recurse(N,0,0);
    printStar();
    return 0;
}