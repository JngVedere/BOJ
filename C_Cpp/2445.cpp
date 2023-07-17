//BOJ 2445 - BRONZ 3
//https://www.acmicpc.net/problem/2445
#include <iostream>
using namespace std;
int N;

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);

    cin >> N;

    for(int i = 1; i <= N; i++){
        for(int j = 0; j < i; j++) cout << '*';
        for(int k = 0; k < N - i; k++) cout << ' ';
        for(int k = 0; k < N - i; k++) cout << ' ';
        for(int j = 0; j < i; j++) cout << '*';
        cout << '\n';
    }

    for(int i = N - 1; i > 0; i--){
        for(int j = 0; j < i; j++) cout << '*';
        for(int k = 0; k < N - i; k++) cout << ' ';
        for(int k = 0; k < N - i; k++) cout << ' ';
        for(int j = 0; j < i; j++) cout << '*';
        cout << '\n';
    }
}