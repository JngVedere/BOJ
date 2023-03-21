//BOJ 25305 - BRONZ 2
//https://www.acmicpc.net/problem/25305
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int N, k;
    scanf("%d %d",&N,&k);
    int* x = new int[N];
    for(int i = 0; i<N;i++){
        scanf("%d",&x[i]);
    }
    sort(x,x+N);
    printf("%d",x[N-k]);
    return 0;
}