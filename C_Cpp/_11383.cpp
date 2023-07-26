//BOJ 11383 - BRONZ 1
//https://www.acmicpc.net/problem/11383
#include <iostream>
using namespace std;
bool F;
int N, M;
string tmp, sarr[10];

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);

    cin >> N >> M;

    for(int i = 0; i < N; i++){
        cin >> sarr[i];
    }

    for(int i = 0; i < N; i++){
        F = true;
        cin >> tmp;
        for(int j = 0; j < 2*M; j++){
            if(sarr[i][j/2] != tmp[j]){
                F = false;
                break;
            }
        }
    }

    if(F) cout << "Eyfa";
    else cout << "Not Eyfa";
}