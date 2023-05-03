//BOJ 24416 - BRONZ 1
//https://www.acmicpc.net/problem/24416
#include <iostream>
using namespace std;
int n, c1=0;

int fib(int n){
    if(n == 1 || n == 2){
        c1++;
        return 1;
    }else return (fib(n-1) + fib(n-2));
}

int main(){
    scanf("%d",&n);
    fib(n);
    printf("%d %d",c1,n-2);
    return 0;
}
