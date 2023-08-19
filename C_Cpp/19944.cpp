//BOJ 19944 - BRONZ 4
//https://www.acmicpc.net/problem/19944
#include <iostream>
using namespace std;
int N, M;

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);

    cin >> N >> M;
    if(M==1 || M== 2) cout << "NEWBIE!";
    else if(M > N) cout << "TLE!";
    else cout << "OLDBIE!";
}