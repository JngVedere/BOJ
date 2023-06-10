//BOJ 1913 - SILVER 3
//https://www.acmicpc.net/problem/1913
#include <iostream>
using namespace std;
int N,f,i=1,j=1,r,c,l;
int arr[1000][1000];


int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);
    cin >> N >> f;
    l = N*N;
    r = c = N-1;
    while(true){
        if(j > l) break;
        if(i%2==0){
            for(int k = 0; k < i & j <= l; k++) arr[r++][c] = j++;
            for(int k = 0; k < i & j <= l; k++) arr[r][c--] = j++;
        }else{
            for(int k = 0; k < i & j <= l; k++) arr[r--][c] = j++;
            for(int k = 0; k < i & j <= l; k++) arr[r][c++] = j++;
        }
        i++;
    }
    
    for(int k = 0;i < N; i++){
        for(int m = 0; m < N; m++) cout << arr[k][m] << " ";
        cout << endl;
    }
}