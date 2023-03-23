//BOJ 1735 - SILVER 3
//https://www.acmicpc.net/problem/1735
#include <iostream>
using namespace std;

int gcd(int a,int b){
    while(b!=0){
        int temp = a % b;
        a = b;
        b = temp;
    }

    return a;
}

int main(){
    int a,b,c,d,h,t,g;
    scanf("%d %d",&a,&b);
    scanf("%d %d",&c,&d);
    h = a*d + b*c; t = b*d; g = gcd(h,t);
    h /= g; t /= g;
    cout << h << " " << t;
    return 0;
}