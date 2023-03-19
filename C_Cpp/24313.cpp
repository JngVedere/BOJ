//BOJ 24313 - SILVER 4 
//https://www.acmicpc.net/problem/24313
#include <iostream>
using namespace std;

int main(){
    int a1,a0,c,n0; //a1*n + a0
    bool res;
    scanf("%d %d %d %d",&a1,&a0,&c,&n0);
    res = (a1*n0+a0 <= c * n0) && (a1 <= c);
    printf(res ? "1" : "0");
    return 0;
}