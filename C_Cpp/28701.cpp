//BOJ 28701 - BRONZ 5
//https://www.acmicpc.net/problem/28701
#include <iostream>
using namespace std;
int N, f, s;

int main(){
    scanf("%d",&N);

    f = N*(N+1)/2;
    s = f*f;

    printf("%d\n%d\n%d", f, s, s);
}