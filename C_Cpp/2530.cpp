//BOJ 2530 - BRONZ 4
//https://www.acmicpc.net/problem/2530
#include <iostream>
using namespace std;
int a,b,c,d;


int main(){
    cin >> a >> b >> c >> d;
    c += d;
    b += c/60;
    a += b/60;
    a %= 24;
    b %= 60;
    c %= 60;

    printf("%d %d %d",a,b,c);

    return 0;
}