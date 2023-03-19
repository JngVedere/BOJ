//BOJ 9063 - BRONZ 3
//https://www.acmicpc.net/problem/9063
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int N,x,y, min_x = 10000,min_y = 10000,max_x = -10000,max_y = -10000;
    scanf("%d",&N);
    while(N--){
        scanf("%d %d", &x, &y);
        min_x = min(x,min_x); min_y = min(y, min_y);
        max_x = max(x,max_x); max_y = max(y, max_y);
    }
    printf("%d",(max_x - min_x)*(max_y - min_y));
    return 0;
}