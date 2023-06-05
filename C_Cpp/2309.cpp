//BOJ 2309 - BRONZ 1
//https://www.acmicpc.net/problem/2309
#include <iostream>
#include <algorithm>
using namespace std;
int sum = 0, cnt = 0, tmp;
int goblin[9];

void printer(){
    sort(goblin, goblin+9);
    for(int i = 2; i < 9; i++) cout << goblin[i] << "\n";
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