//BOJ 13909 - SILVER 5
//https://www.acmicpc.net/problem/13909
#include <iostream>
#include <cmath>
using namespace std;

// the result is floor(sqrt(N)).. 
/*
1 -> 1
2 -> 1
3 -> 1
4 -> 2
..
8 -> 2
9 -> 3
..
15 -> 3
16 -> 4
*/

int main(){
    int N,res=0;
    scanf("%d",&N);
    res = (int)floor(sqrt(N));
    printf("%d", res);
    return 0;
}