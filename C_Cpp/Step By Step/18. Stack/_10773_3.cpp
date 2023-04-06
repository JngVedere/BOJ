//BOJ 10773 - SILVER 4
//https://www.acmicpc.net/problem/10773
#include <iostream>
using namespace std;

int main(){
    ios :: sync_with_stdio(false); cin.tie(NULL);

    int K,n,sum=0,top=0; cin >> K;
    int is[100000];
    
    while(K--){
        cin >> n;
        if(n) is[top++] = n;
        else --top;
    }

    while(top){
        sum+=is[--top];
    }
    cout << sum;

    return 0;
}