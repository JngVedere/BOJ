//BOJ 9663 - GOLD 4
//https://www.acmicpc.net/problem/9663
#include <iostream>
#include <cmath>

int chess[15];
int n;
int res = 0; // 1 <= N < 15

int promising(int col){
    
    for(int i = 0; i < col; i++){
        if(chess[col] == chess[i] || col - i == abs(chess[col] - chess[i])){
            
            return 0;
        }
    }
        
    return 1;
} 

void nqueen(int cnt){
    if(cnt == n){
        res++;
        return;
    }

    for(int i = 0; i < n; i++){
        chess[cnt] = i;

        if(promising(cnt)){
            nqueen(cnt+1);
        }
    }
}

int main(){
    scanf("%d",&n);
    nqueen(0);
    printf("%d",res);

    return 0;
}