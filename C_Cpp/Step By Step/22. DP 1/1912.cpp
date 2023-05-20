//BOJ 1912 - SILVER 2
//https://www.acmicpc.net/problem/1912
#include <iostream>
#define MIN_LIMIT -100000000
using namespace std;

int n,tmp,max_num;
int num[100007] = {0}, res[100007] = {MIN_LIMIT};

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    for(int i = 1; i<=n; i++) cin >> num[i];
    max_num = res[1] =  num[1];

    for(int i = 2; i<=n; i++){
        tmp = num[i] + res[i-1];
        res[i] = (tmp > num[i] ? tmp : num[i]);
        if(res[i] > max_num) max_num = res[i];
    }
    cout << max_num;
    return 0;
}