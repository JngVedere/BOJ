//BOJ 5585 - BRONZ 2
//https://www.acmicpc.net/problem/5585
#include <iostream>
#include <algorithm>
using namespace std;
int W, T, C[] = {500,100,50,10,5,1};

int main(){
    scanf("%d", &W);
    W = 1000 - W;

    for(int i = 0; i < 6; i++){
        T += W/C[i];
        W %= C[i];
    }

    printf("%d", T);
}