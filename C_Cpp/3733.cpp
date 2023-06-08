//BOJ 3733 - BRONZ 5
//https://www.acmicpc.net/problem/3733
#include <iostream>
using namespace std;
int N, S, x;

int main(){

    while(scanf("%d%d",&N,&S)==2){
        x = S/(N+1);
        printf("%d\n",x);
    }
    return 0;
}