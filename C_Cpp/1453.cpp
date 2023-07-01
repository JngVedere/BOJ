//BOJ 1453 - BRONZ 2
//https://www.acmicpc.net/problem/1453
#include <iostream>
using namespace std;
int N, tmp, ign, num[101] = {0};

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);

    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> tmp;
        if(num[tmp]==1) ign++;
        else num[tmp] = 1;
    }
    cout << ign;
}