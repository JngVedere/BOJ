//BOJ 2231 - BRONZ 2
//https://www.acmicpc.net/problem/2231
#include <iostream>
using namespace std;

int main(){
    int N,r=0,t=0;
    scanf("%d",&N);

    for(int i = 1,j=0; i <=N;i++){
        int sum = 0;
        j = i;

        if(N == i){
            cout << 0;
            break;
        }

        do{
            sum+=j%10;
            j/=10;     
        }while(j!=0);

        if(N == i + sum){
            cout << i << " ";
            break;
        }
    }
    return 0;
}