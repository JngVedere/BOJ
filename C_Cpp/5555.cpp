//BOJ 5555 - BRONZ 3
//https://www.acmicpc.net/problem/5555
#include <iostream>
#include <string>
using namespace std;
int T, l, cnt;
string C, tmp;

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);
    cin >> C;
    cin >> T;
    while(T--){
        cin >> tmp;
        tmp += tmp;
        if(tmp.find(C)!=string::npos) cnt++;
    }

    cout << cnt;
}