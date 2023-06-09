//BOJ 2953 - BRONZ 3
//https://www.acmicpc.net/problem/2953
#include <iostream>
using namespace std;
int n, tmp = 0, a1, a2 = 0;

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);
    for(int i = 1; i <= 5; i++){
        tmp = 0;
        for(int j = 0; j < 4; j++){
            cin >> n;
            tmp += n;
        }
        if(tmp > a2){
            a1 = i;
            a2 = tmp;
        }
    }
    cout << a1 << " " << a2;
}