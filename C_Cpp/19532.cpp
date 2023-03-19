//BOJ 19532 - BRONZ 2
//https://www.acmicpc.net/problem/19532
#include <iostream>
using namespace std;

int main(){
    int a,b,c,d,e,f,x,y;
    scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
    y = (int)((c*d - a*f)/(b*d - a*e));
    if(a==0){
        x = (int)((f - e*y) / d);
    }else{
        x = (int)((c - b*y) / a);
    }

    printf("%d %d",x,y);
    return 0;
}