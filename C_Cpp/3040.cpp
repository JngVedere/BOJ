//BOJ 3040 - BRONZ 2
//https://www.acmicpc.net/problem/3040
#include <iostream>
#include <algorithm>
using namespace std;
int sum = 0, cnt = 0, tmp;
int goblin[9];

void printer(){
    for(int i = 0; i < 9; i++) if(goblin[i]!=0) cout << goblin[i] << "\n";
}


int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);
    for(int i = 0; i < 9; i++){
        cin >> goblin[i];
        sum += goblin[i];
    }

    for(int i = 0; i < 8; i++){
        for(int j = i+1; j < 9; j++){
            tmp = sum;
            tmp -= (goblin[i]+goblin[j]);
            if(tmp == 100){
                goblin[i] = goblin[j] = 0;
                printer();
                return 0;
            }
        }
    }
}