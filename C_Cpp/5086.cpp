//BOJ 5086 - BRONZ 3
//https://www.acmicpc.net/problem/5086
#include <iostream>
#include <string>
using namespace std;

int main(){
    int a,b,r;
    while(true){
        scanf("%d %d", &a,&b);
        if(a==0 && b==0){
            break;
        }else if(a==0 || b==0){
            printf("neither\n");
            continue;
        }
        r = (a>b ? a%b : b%a);

        if(!r){
            printf((a>b ? "multiple\n" : "factor\n"));
        }else{
            printf("neither\n");
        }
    }
    return 0;
}