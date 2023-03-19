//BOJ 2563 - SILVER 5
//https://www.acmicpc.net/problem/2563
#include <iostream>
#include <string>
using namespace std;

int main(){
    int P, x, y, paper[100][100] = {0,}, sum = 0;
    scanf("%d", &P);
    while(P--){
        scanf("%d %d", &x, &y);
        for(int i = x; i < x + 10; i ++){
            for(int j = y; j < y + 10; j++){
                if(paper[i][j]==0) sum++;
                paper[i][j] = 1;
            }
        }
    }
    printf("%d",sum);
    return 0;
}