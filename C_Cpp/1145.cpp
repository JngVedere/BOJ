//BOJ 1145 - BRONZ 1
//https://www.acmicpc.net/problem/1145
#include <iostream>
using namespace std;
int num[5];
int cnt, lcm, _min = 100;

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);

    for(int i = 0; i < 5; i++){
        cin >> num[i];
        if(num[i] < _min) _min = num[i];
    }

    long long tmp = _min;
    while(true){
        cnt = 0;
        for(int i = 0; i < 5; i++) if(tmp % num[i] == 0) cnt++;
        if(cnt > 2) break;
        tmp++;
    }
    cout << tmp;

    return 0;
}